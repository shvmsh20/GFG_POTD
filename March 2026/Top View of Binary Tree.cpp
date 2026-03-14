vector<int> topView(Node *root) {
        // code here
        unordered_map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                pair<Node*, int> p = q.front();
                q.pop();
                Node* node = p.first;
                int verticalLevel = p.second;
                if(mp.find(verticalLevel)==mp.end()){
                    mp[verticalLevel] = node->data;
                }
                if(node->left){
                    q.push({node->left, verticalLevel-1});
                }
                if(node->right){
                    q.push({node->right, verticalLevel+1});
                }
            }
        }
        vector<pair<int, int>> v;
        for(auto it: mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end());
        vector<int> res;
        for(auto it: v){
            res.push_back(it.second);
        }
        return res;
    }