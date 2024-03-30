class Solution {
    public int subarraysWithKDistinct(int[] nums, int k) {
        return atmostK(nums,k)-atmostK(nums,k-1);
        
    }
    public int atmostK(int []nums,int k)
    { int ans=0;
        HashMap<Integer,Integer> mp=new HashMap<>();
        int i=0; int j=0;
        while(j<nums.length)
        {
            mp.put(nums[j],mp.getOrDefault(nums[j],0)+1);
            while(mp.size()==k+1)
            {
                mp.put(nums[i],mp.get(nums[i])-1);
                if(mp.get(nums[i])==0)
                    mp.remove(nums[i]);
                i++;
            }
            ans+=j-i+1;
            j++;
            
        }
     return ans;
    }
}
