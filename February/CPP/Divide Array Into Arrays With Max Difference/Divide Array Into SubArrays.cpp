class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> result;
        vector<int> vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(vec.empty()){
                vec.push_back(nums[i]);
            }
            else if(vec.size()==3){
                result.push_back(vec);
                vec.clear();
                i--;
            }
            else{
                if(nums[i]-vec[0]<=k){
                    vec.push_back(nums[i]);
                }
                else{
                    return {};
                }
            }
        }
        result.push_back(vec);
        return result;
        
    }
};
