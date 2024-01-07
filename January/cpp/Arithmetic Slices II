class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        vector<unordered_map <int,int>> dp(n); // Creating a vector which has a hashmapp in it 
        for(int i =1;i<n;i++){
            for(int j =0;j<i;j++){
                long long diff = static_cast<long long>(nums[i])-nums[j]; // Subtracting the elements to find the arithmetic relation between them
                if(diff > INT_MAX || diff <INT_MIN){
                    continue;
                }
                int diffInt = static_cast<int> (diff); //Converting the long data type to integer format
                dp[i][diffInt] +=1;
                if (dp[j].count(diffInt)){
                    dp[i][diffInt] += dp[j][diffInt];
                    count +=dp[j][diffInt]; //Incrementing the count for correct arithmetic sequence sub array 
                }
            }
        }
        return count;
    }
};
