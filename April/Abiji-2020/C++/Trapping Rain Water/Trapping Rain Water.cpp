class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n==0) return 0;
        vector<int> left(n);
        vector<int> right(n);
        int trappwater = 0;
        left[0] = height[0];
        for(int i =1;i<n;i++){
            left[i] = max(left[i-1], height[i]);
        }
        right[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]= max(height[i], right[i+1]);
        }
        for(int i=0;i<n;i++){
            trappwater+= min(left[i],right[i]) - height[i];
        }
        return trappwater;
    }
};
