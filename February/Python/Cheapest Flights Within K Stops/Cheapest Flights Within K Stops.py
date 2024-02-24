class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        adj = defaultdict(list)
        for l_src, l_dest, l_price in flights:
            adj[l_src].append((l_dest, l_price))

        dist = [float('inf')] * n
        dist[src] = 0

        q = [(src, 0)]
        stops = 0

        while stops <= k and q:
            size = len(q)
            for _ in range(size):
                c_src, src_price = q.pop(0)
                for c_dest, dest_price in adj[c_src]:
                    if src_price + dest_price >= dist[c_dest]:
                        continue
                    dist[c_dest] = src_price + dest_price
                    q.append((c_dest, dist[c_dest]))
            stops += 1

        return dist[dst] if  dist[dst] != float('inf') else -1
