class Solution {
public:
    string maximumOddBinaryNumber(string st) {
        string s = st;
       sort(s.begin(),s.end(),greater<int>());
       for(int i=0;i<st.size()-1;i++){
           s[i]=s[i+1];
       }
       s[st.size()-1]='1';
       return s;
    }
};
