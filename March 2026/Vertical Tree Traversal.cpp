vector<vector<int>> verticalOrder(Node *root) {
        // code here
        unordered_map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                pair<Node*, int> p = q.front();
                q.pop();
                Node* node = p.first;
                int verticalLine = p.second;
                if(mp.find(verticalLine)==mp.end()){
                    mp[verticalLine] = {node->data};
                }else{
                    mp[verticalLine].push_back(node->data);
                }
                if(node->left){
                    q.push({node->left, verticalLine-1});
                }
                if(node->right){
                    q.push({node->right, verticalLine+1});
                }
            }
        }
        vector<pair<int, vector<int>>> v;
        for(auto it: mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end());
        vector<vector<int>> res;
        for(auto it: v){
            res.push_back(it.second);
        }
        return res;
    }