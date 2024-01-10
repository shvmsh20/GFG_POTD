void dfs(TreeNode* root, unordered_map<int, vector<int>> &adj){
        if(root==nullptr){
            return;
        }
        if(root->left){
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
        }
        if(root->right){
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
        }
        dfs(root->left, adj);
        dfs(root->right, adj);
    }
    int amountOfTime(TreeNode* root, int start) {
        
        unordered_map<int, vector<int>> adj;
        dfs(root, adj);
        int res=0;
        queue<int> q;
        q.push(start);
        set<int> vis;
        vis.insert(start);
        
        while(!q.empty()){
            bool flag = false;
            int n = q.size();
            for(int i=0; i<n; i++){
                int node = q.front();
                q.pop();
                for(auto v: adj[node]){
                    if(vis.find(v)==vis.end()){
                        vis.insert(v);
                        q.push(v);
                        flag = true;
                    }
                }
            }
            if(flag){
                res++;
            }
        }
        return res;
    }