class Solution {
    public boolean halvesAreAlike(String s) {
        String s1="";
        char ch1;
        String s2 = "";
        char ch2;
        int n = s.length()/2;
        for(int i=0;i<n;i++){
            ch1 = s.charAt(i);
            s1=ch1+s1;
        }
        for(int i=n;i<s.length();i++){
            ch2 = s.charAt(i);
            s2 = ch2+s2;
        }
        s1 = s1.toLowerCase();
       int a =0;
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)=='a'||s1.charAt(i)=='e'||s1.charAt(i)=='i'||s1.charAt(i)=='o'||s1.charAt(i)=='u'){
                a++;
            }
        }
        s2 = s2.toLowerCase();
         int b =0;
        for(int i=0;i<s2.length();i++){
            if(s2.charAt(i)=='a'||s2.charAt(i)=='e'||s2.charAt(i)=='i'||s2.charAt(i)=='o'||s2.charAt(i)=='u'){
                b++;
            }
        }
       
        if(a==b){
            return true;
        }
        
        return false;
    }
}
