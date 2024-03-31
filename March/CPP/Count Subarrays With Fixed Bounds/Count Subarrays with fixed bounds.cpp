class Solution {
public:
    long long countSubarrays(vector<int>& a, int minK, int maxK) {
        int n=a.size(),j=0,i=-1,prevMaxK=-1,prevMinK=-1;
        long long ans=0;
        while(j<n) {
            if(a[j]<minK || a[j]>maxK) i=j;
            if(a[j]==minK) prevMinK=j;
            if(a[j]==maxK) prevMaxK=j; 
            ans+=max(0,min(prevMaxK,prevMinK)-i);
            j++;
        }
        return ans;

    }
};
