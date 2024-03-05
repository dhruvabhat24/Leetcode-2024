class Solution {
public:
    int minimumLength(string s) {
        if (s.size()==1) return 1;
        int front =0, end = s.size()-1;
        
        while(front<end && s[front]==s[end]){
            char st = s[front];
            while(front<= end && s[front]==st) front++;
            while(end>= front && s[end]==st) end--;
        }
        return end-front+1;
    }
};
