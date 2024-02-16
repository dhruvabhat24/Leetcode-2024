class Solution {
    public int findLeastNumOfUniqueInts(int[] arr, int k) {
        Map<Integer,Integer> map = new HashMap<>();
        
        for(int x:arr)
        {
            if(map.get(x)==null)
            map.put(x,1);
            else
            map.put(x,map.get(x)+1);
        }
        
        ArrayList<Integer> list = new ArrayList<>(map.values());
        Collections.sort(list);
        
        int sum=0;
        int i=0;
        for(int x:list)
        {
            i++;
            sum+=x;
            if(sum>k)
                return list.size()-i+1;
        }
        return 0;
    }
        }
