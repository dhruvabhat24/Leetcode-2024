class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int i=0;
        while(tickets[k]!=0){
            if (tickets[i]!=0){
                ans++;
                tickets[i]--;
            }
            i++;
            if(i==tickets.size()) i=0;
        }
        return ans;
    }
};
