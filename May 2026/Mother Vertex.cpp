 vector<vector<int>> adjListHelper(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adjList(V);

        for (auto &i : edges) {
            adjList[i[0]].push_back(i[1]);
        }

        return adjList;
    }

    void dfs(int node, vector<int>& visited, vector<vector<int>>& adjList) {

        visited[node] = 1;

        for (auto nbr : adjList[node]) {
            if (!visited[nbr]) {
                dfs(nbr, visited, adjList);
            }
        }
    }

    int findMotherVertex(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adjList = adjListHelper(V, edges);

        vector<int> visited(V, 0);

        int candidate = -1;

        for (int i = 0; i < V; i++) {

            if (!visited[i]) {
                dfs(i, visited, adjList);
                candidate = i;
            }
        }

        fill(visited.begin(), visited.end(), 0);

        dfs(candidate, visited, adjList);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                return -1;
            }
        }

        return candidate;
    }