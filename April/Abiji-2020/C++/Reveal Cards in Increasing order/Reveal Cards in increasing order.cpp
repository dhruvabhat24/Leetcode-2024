class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans(deck.size(),0);
        deque<int> dq;
        for(int i=0;i<deck.size();i++){
            dq.push_back(i);
        }
        sort(deck.begin(),deck.end());
        for(int i=0;i<deck.size();i++){
            int card = deck[i];
            ans[dq.front()] = card;
            dq.pop_front();
            if(!dq.empty()){
                dq.push_back(dq.front());
                dq.pop_front();
            } 
        }
        return ans;
    }
};
