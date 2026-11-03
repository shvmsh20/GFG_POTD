 vector<int> parent, sz;

        int find(int x) {
            if (parent[x] == x)
                return x;

            return parent[x] = find(parent[x]);
        }

        long long unite(int u, int v) {

            u = find(u);
            v = find(v);

            if (u == v)
                return 0;

            if (sz[u] < sz[v])
                swap(u, v);

            // New paths formed between two components
            long long paths = 1LL * sz[u] * sz[v];

            parent[v] = u;
            sz[u] += sz[v];

            return paths;
        }

        vector<int> maximumWeight(int n, vector<vector<int>> edges, vector<int>& queries) {

            // Initialize DSU
            parent.resize(n + 1);
            sz.assign(n + 1, 1);

            for (int i = 1; i <= n; i++) {
                parent[i] = i;
            }

            // Sort edges by weight
            sort(edges.begin(), edges.end(),
                 [](vector<int>& a, vector<int>& b) {
                     return a[2] < b[2];
                 });

            // Store queries with original indices
            vector<pair<int, int>> q;

            for (int i = 0; i < queries.size(); i++) {
                q.push_back({queries[i], i});
            }

            sort(q.begin(), q.end());

            vector<int> ans(queries.size());

            int j = 0;
            long long total = 0;

            // Process queries in increasing order
            for (auto &query : q) {

                int x = query.first;
                int idx = query.second;

                // Add edges with weight <= x
                while (j < edges.size() && edges[j][2] <= x) {

                    int u = edges[j][0];
                    int v = edges[j][1];

                    total += unite(u, v);

                    j++;
                }

                ans[idx] = total;
            }

            return ans;
        }