class Solution {
    public String minRemoveToMakeValid(String s) {
        int balance=0;
        StringBuilder str = new StringBuilder(s);

        // travelling from left to right
        for(int i=0; i < str.length(); i++) {
            if(str.charAt(i) == '(') {
                balance++;
            } else if(str.charAt(i) == ')') {
                if(balance > 0) balance--;
                else {
                    str.deleteCharAt(i);
                    i--;
                }
            }
        }

        // travelling from right to left
        for(int i=str.length()-1; i >= 0; i--) {
            if(str.charAt(i) == '(' && balance > 0) {
                str.deleteCharAt(i);
                balance--;
            }
        }

        return str.toString();
    }
}
