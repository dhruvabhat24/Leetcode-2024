class RandomizedSet {
    Set<Integer> s;
    public RandomizedSet() {
        s=new HashSet<>();
    }
    
    public boolean insert(int val) {
        if(s.contains(val)){
            return false;
        }else{
            s.add(val);
            return true;
        }
    }
    
    public boolean remove(int val) {
        if(s.contains(val)){
            s.remove(val);
            return true;
        }else{
            return false;
        }
    }
    
    public int getRandom() {
        List<Integer> list=new ArrayList<Integer>(s);
        int r=(int)(Math.random()*s.size());

        return list.get(r);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
