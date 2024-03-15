class Solution {
    int atMost(vector<int>& nums, int goal){
        int head, tail =0, sum=0, result =0;
        for(head =0;head<nums.size();head++){
            sum+=nums[head];
            while(sum> goal && tail<= head){
                sum-=nums[tail];
                tail++;
            }
            result+= head-tail+1;
        }
        return result;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal) - atMost(nums,goal-1);
    }
};
