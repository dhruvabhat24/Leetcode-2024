class Solution {
    #define ppr pair<int,int>
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<pair<int,int>> adj[n];
        for(auto it: meetings){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]
            });
        }
        priority_queue<ppr,vector<ppr>, greater<ppr> > pq;
        pq.push({0,0});
        pq.push({0,firstPerson});
        vector<int> vis(n,0);
        while(!pq.empty()){
            auto it = pq.top();
            int time = it.first;
            int person = it.second;
            pq.pop();
            if(vis[person]) continue;
            vis[person]= true;
            for(auto it : adj[person]){
                if(!vis[it.first]&& it.second >= time){
                    pq.push({it.second, it.first});
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(vis[i]) ans.push_back(i);
        }
        return ans;
    }
};
