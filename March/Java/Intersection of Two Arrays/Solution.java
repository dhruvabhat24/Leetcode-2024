class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> unqEle = new HashSet<>(), removedEle = new HashSet<>();
        for(var num : nums1){
            unqEle.add(num);
        }
        List<Integer> intersection = new ArrayList<>();
        for(var num : nums2){
            if(unqEle.contains(num) && !removedEle.contains(num)){
                intersection.add(num);
                removedEle.add(num);
            }
        }
        return intersection.stream().mapToInt(x->x).toArray();  
    }
}
