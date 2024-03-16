class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxLength =0;
        int count =0;
        mp[0] =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count--;
            else count++;
            if (mp.find(count)!=mp.end()) maxLength = max(maxLength, i-mp[count]);
            else mp[count] = i;
        }
        return maxLength;
    }
};
