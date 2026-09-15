class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {

        vector<vector<int>> adj(n);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int> q;
        vector<int> dist(n, -1);

        q.push(source);
        dist[source] = 0;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (int next : adj[current]) {
                if (dist[next] == -1) {
                    dist[next] = dist[current] + 1;
                    q.push(next);
                }
            }
        }

        return dist[destination] != -1;
    }
};