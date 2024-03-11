class Solution {
    public String customSortString(String order, String s) {
        
        char arr[] = new char[26];

        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            arr[ch-'a']++;
        }

        StringBuilder ans = new StringBuilder("");

        for(int i=0; i<order.length(); i++){
            char ch = order.charAt(i);
            while(arr[ch-'a']>0){
                ans.append(ch);
                arr[ch-'a']--;
            }
        }

        
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            while(arr[ch-'a']>0){
                ans.append(ch);
                arr[ch-'a']--;
            }
        }

        return ans.toString();
    }
}
