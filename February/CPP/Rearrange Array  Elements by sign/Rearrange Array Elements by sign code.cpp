class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vt;
        vector<int> pttemp,nttemp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) pttemp.push_back(nums[i]);
            else nttemp.push_back(nums[i]);
        }
        for(int i=0;i<pttemp.size();i++){
            vt.push_back(pttemp[i]);
            vt.push_back(nttemp[i]);
        }
        return vt;
    }
};
