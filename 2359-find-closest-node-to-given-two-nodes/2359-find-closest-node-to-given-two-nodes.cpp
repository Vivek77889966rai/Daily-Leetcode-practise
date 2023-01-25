class Solution {
public:
    template<typename T_pair, typename T_vector>
    void dijkstra(T_pair &g, T_vector &dist, int start) {
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
      dist[start] = 0;
      pq.push({start, 0});
      while (!pq.empty()) {
        auto [u_node, u_cost] = pq.top(); pq.pop();
        if (u_cost > dist[u_node]) continue;
        for (auto [v_node, v_cost] : g[u_node]) {
          if (dist[v_node] > dist[u_node] + v_cost) {
            dist[v_node] = dist[u_node] + v_cost;
            pq.push({v_node, dist[v_node]});
          }
        }
      }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> d1(n, INT_MAX), d2(n, INT_MAX);
        vector<vector<pair<int, int>>> g(n);
        for (int i = 0; i < n; i++) {
            if (edges[i] != -1) {
                g[i].push_back({edges[i], 1});
            }
        }
        dijkstra(g, d1, node1);
        dijkstra(g, d2, node2);
        int ans = -1, mi = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (max(d1[i], d2[i]) < mi) {
                mi = max(d1[i], d2[i]);
                ans = i;
            }
        }
        return ans;
    }
};