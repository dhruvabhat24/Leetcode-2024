class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vt(nums.size()+1,0);
        for(int i = 0;i<nums.size();i++){
           vt[nums[i]]++;
        }
        int missing,duplicate;
        for(int i=0;i<vt.size();i++){
            if(vt[i]==2) duplicate =i;
            if(vt[i]==0) missing = i;
        }
        return {duplicate,missing};
    }
};
