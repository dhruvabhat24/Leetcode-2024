class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int a_pointer = 0;
        int b_pointer = 0;
        while(a_pointer < g.length && b_pointer <s.length){
            if(g[a_pointer] <= s[b_pointer]){
                a_pointer++;
                b_pointer++;
            }else{
                b_pointer++;
            }
        }
        return a_pointer;
    }
}
