class Solution {
    
public:
int countsub(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int,int> mp;
        int i=0,j=0;
        int count = 0;
        while(j<n){
            mp[nums[j]]++;
            while(i<=j &&mp.size()> k ){
                if(--mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
            }
            count += j-i+1;
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countsub(nums,k) - countsub(nums,k-1);
    }
};
