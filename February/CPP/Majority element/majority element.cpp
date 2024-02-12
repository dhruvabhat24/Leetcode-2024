class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(auto x : nums){
           mp[x]++;
       } 
       for(auto y: mp){
           if(y.second>(nums.size()/2)) return y.first;
       }
       return 0;
    }
};
