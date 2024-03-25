import java.io.*;
import java.util.*;


class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        Vector<Integer> v = new Vector<Integer>();
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        for (int i:nums) hm.put(i,hm.getOrDefault(i,0)+1);

        for(int num:hm.keySet()){
            if(hm.get(num)>1) v.add(num);
        }
        return v;
        
    }
}
