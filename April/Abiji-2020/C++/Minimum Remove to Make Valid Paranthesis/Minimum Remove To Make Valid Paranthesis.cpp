class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        vector<char> arr(s.begin(),s.end());
        for(int i=0;i<arr.size();i++){
            if (arr[i]=='(') open++;
            else if (arr[i]==')'){
                if (open==0) arr[i]='*';
                else open--;
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            if (open>0 && arr[i]=='('){
                arr[i] = '*';
                open--;
            }
        }
        string rest ="";
        for(char c: arr){
            if (c!='*') rest+=c;
        }
        return rest;
    }
};
