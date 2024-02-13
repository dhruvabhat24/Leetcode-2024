class Solution {
    bool ispali(const string &s){
        string t =s;
       reverse(t.begin(),t.end());
       return s==t;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispali(words[i])) return words[i];
        }
        return "";
    }
};
