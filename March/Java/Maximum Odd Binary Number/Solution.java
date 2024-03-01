class Solution {
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    System.out.println("Input: s = ");
    String s= sc.nextLine();
    System.out.println("Output: "+maximumOddBinaryNumber(s)); 
}
    public static String maximumOddBinaryNumber(String s) {
        String returnString="";
        String count1="";
        String count0="";
        if(1<=s.length() && s.length()<= 100){
            for(int i=0; i<s.length(); i++){
                if(s.charAt(i)=='0') count0+="0";
                if(s.charAt(i)=='1') count1+="1";
            }
            if (!(count1.equals("")) && count1.length()+count0.length()== s.length()){
                returnString= count1.substring(1,count1.length())+ count0+"1";
            }
        }
        return returnString;
    }
}
