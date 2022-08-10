bool isSafe(int node, int currColor, int n, bool graph[101][101], vector<int> &colors){
        for(int i=0; i<n; i++){
            if(i!=node && graph[node][i]==1 && colors[i]==currColor){
                return false;
            }
        }
        return true;
    }
    bool solve(int curr, int n, bool graph[101][101], int m, vector<int> &colors){
        if(curr==n){
            return true;
        }
        for(int i=1; i<=m; i++){
            if(isSafe(curr, i, n, graph, colors)==true){
                colors[curr] = i;
                if(solve(curr+1, n, graph, m, colors)==true){
                    return true;
                }
                colors[curr] = -1;
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int> colors(n, -1);
        return solve(0, n, graph, m, colors);
    }