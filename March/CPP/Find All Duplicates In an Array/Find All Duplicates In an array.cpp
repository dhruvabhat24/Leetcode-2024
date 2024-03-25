class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
       vector<int> array;  

       int N = nums.size();

       for ( int i = 0 ; i < N ; i++ )
       {
        if ( nums[abs(nums[i])-1] > 0 )
        {
            nums[abs(nums[i])-1] = nums[abs(nums[i])-1]*(-1);
        }

        else
        {
            array.push_back(abs(nums[i]));
        }
       } 
       return array; 
    }
};
