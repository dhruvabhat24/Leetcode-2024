class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto& x: flights) adj[x[0]].push_back({x[1],x[2]});
        vector<int> dist(n,INT_MAX);
        dist[src] = 0;
        queue<pair<int,int>> q;
        q.push({src,0});
        int stops = 0;
        while(!q.empty() && stops<=k){
            int sz = q.size();
            while(sz-- >0){
                auto [node, distance] = q.front();
                q.pop();
                if(!adj.count(node)) continue;
                for(auto& [neighbour,price]: adj[node]){
                    if(price+distance>=dist[neighbour]) continue;
                    dist[neighbour] = price+distance;
                    q.push({neighbour, dist[neighbour]});
                }
            }
            stops++;
        }
        return dist[dst] == INT_MAX?-1: dist[dst];
    }
};
