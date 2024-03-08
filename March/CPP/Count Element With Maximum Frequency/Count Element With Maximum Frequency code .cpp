class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        int maxvalue=0, count=0;
        for(auto &x: mp){
            if(x.second>maxvalue){
                maxvalue = x.second;
            }
        }
        for(auto &x: mp){
            if(x.second==maxvalue) count++;
        }
        return count* maxvalue;
    }
};
