void dfs(char u, unordered_map<char, unordered_set<char>> &mp, unordered_set<char> &vis, string &res){
        if(vis.find(u)!=vis.end()){
            return;
        }
        vis.insert(u);
        for(char v: mp[u]){
            if(vis.find(v)==vis.end()){
                dfs(v, mp, vis, res);
            }
        }
        res.push_back(u);
        return;
    }
    string findOrder(string dict[], int n, int k) {
        //code here
        unordered_map<char, unordered_set<char>> mp;
        for(int i=0; i<n-1; i++){
            int n1 = dict[i].length();
            int n2 = dict[i+1].length();
            for(int j=0; j<min(n1, n2); j++){
                if(dict[i][j]!=dict[i+1][j]){
                    mp[dict[i][j]].insert(dict[i+1][j]);
                    break;
                }
            }
        }
        string res;
        unordered_set<char> vis;
        for(int i=0; i<k; i++){
            char x = (char)'a'+i;
            dfs(x, mp, vis, res);
        }
        reverse(res.begin(), res.end());
        return res;
    }