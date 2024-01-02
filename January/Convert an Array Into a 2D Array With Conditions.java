import java.util.*;
import java.lang.*;


class Solution {
     Map<Integer,Integer> map=new HashMap<>();
    int ifany(Map<Integer,Integer> map)
    {
        for(int i:map.keySet())
        {
            if(map.get(i)>=1)
                return 1;
        }
        return 0;
        
    }
    
    
    public List<List<Integer>> findMatrix(int[] nums) {
        
        List<Integer> temp=new ArrayList<>();
        List<List<Integer>> ans=new ArrayList<>();
       
        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i],1+map.getOrDefault(nums[i],0));
        }
        while(ifany(map)==1)
        {
        for(int i:map.keySet())
        {
            if(map.get(i)>=1)
            {
                temp.add(i);
                map.put(i,map.get(i)-1);
                
            }
        }
            ans.add(new ArrayList<>(temp));
            temp.clear();
        }
        return ans;
    }
}
