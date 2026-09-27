int longestPath(string& s, vector<vector<int>>& edges) {
        // code here
        int n = s.size();
               vector<vector<int>> g(n);
               for (auto &e : edges) {
                   int u = e[0] - 1, v = e[1] - 1;
                   g[u].push_back(v);
                   g[v].push_back(u);
               }

               vector<int> c(n);
               for (int i = 0; i < n; ++i) c[i] = (s[i] == 'B');

               // Root the tree at 0
               vector<int> par(n, -1), order;
               order.reserve(n);
               vector<int> st = {0};
               par[0] = -2;
               while (!st.empty()) {
                   int u = st.back(); st.pop_back();
                   order.push_back(u);
                   for (int v : g[u]) if (v != par[u]) {
                       par[v] = u;
                       st.push_back(v);
                   }
               }

               vector<int> down(n, 1), up(n, 1);
               int ans = 1;

               // Bottom-up: longest same-colour path inside subtree
               for (int i = n - 1; i >= 0; --i) {
                   int u = order[i], t1 = 0, t2 = 0;
                   for (int v : g[u]) if (par[v] == u && c[v] == c[u]) {
                       if (down[v] > t1) { t2 = t1; t1 = down[v]; }
                       else if (down[v] > t2) t2 = down[v];
                   }
                   down[u] = t1 + 1;
                   ans = max(ans, down[u]);
                   if (t2) ans = max(ans, t1 + t2 + 1);
               }

               // Top-down: longest same-colour path going through parent side
               for (int u : order) {
                   int t1 = 0, t2 = 0, id = -1;
                   for (int v : g[u]) if (par[v] == u && c[v] == c[u]) {
                       if (down[v] > t1) { t2 = t1; t1 = down[v]; id = v; }
                       else if (down[v] > t2) t2 = down[v];
                   }
                   for (int v : g[u]) if (par[v] == u) {
                       if (c[v] != c[u]) up[v] = 1;
                       else up[v] = 1 + max(up[u], 1 + (v == id ? t2 : t1));
                   }
               }

               // Mixed path: one Red component + one Blue component joined by an R-B edge
               for (auto &e : edges) {
                   int u = e[0] - 1, v = e[1] - 1;
                   if (c[u] != c[v]) {
                       ans = max(ans, max(down[u], up[u]) + max(down[v], up[v]));
                   }
               }

               return ans;
    }