#pragma GCC optimize("03", "unroll-loops")

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        const unsigned short row = matrix.size(), col = matrix[0].size();
        if (row==1 && col ==1) return matrix[0][0]=='1';
        vector<unsigned short> h(col+1);
        int maxArea =0;
        for(int i=0;i<row;i++){
            vector<int> st;
            for(int j=0;j<=col;j++){
                h[j] = (j==col || matrix[i][j]=='0')? 0: h[j]+1;
                while(!st.empty() && (j==col || h[j]<h[st.back()])){
                    int m = st.back();
                    st.pop_back();
                    int w = (st.empty())? j:(j-st.back()-1);
                    maxArea = max(maxArea, h[m]*w);
                }
                st.push_back(j);
            }
        }
        return maxArea;
    }
};
