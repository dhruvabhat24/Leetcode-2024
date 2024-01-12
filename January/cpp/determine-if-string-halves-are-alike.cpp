class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt = 0,n = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower); // to make the string in all lower case
        for(int  i = 0;i<n;i++)//counting all the vowels in the string
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
        }
        int c = 0;
        for(int i = 0;i<n/2;i++)//counting all the vowels in the first half of the string
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c++;
        }
        if(2*c==cnt)//checking for the condition 
            return true;
        else
            return false;
    }
};
