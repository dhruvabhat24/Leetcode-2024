class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int> groupsize(n,1), preveElement(n,-1);
        sort(nums.begin(),nums.end());
        int maxIndex =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j] ==0 && groupsize[i]<groupsize[j]+1){
                    groupsize[i] = groupsize[j]+1;
                    preveElement[i] =j;
                }
            }
            if (groupsize[i]>groupsize[maxIndex]){
                maxIndex = i;
            }
        }
        vector<int> result;
        for(int i =maxIndex;i !=-1;i=preveElement[i]){
            result.insert(result.begin(),nums[i]);
        }
        return result;
    }
};
