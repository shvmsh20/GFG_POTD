void inorder(Node* node, int verticalLine, unordered_map<int, int> &mp){
        if(node==nullptr) return;
        inorder(node->left, verticalLine-1, mp);
        mp[verticalLine]+= node->data;
        inorder(node->right, verticalLine+1, mp);
    }
    vector<int> verticalSum(Node* root) {
        // code here
        unordered_map<int, int> mp;
        inorder(root, 0, mp);
        vector<pair<int, int>> v;
        for(auto pair: mp){
            v.push_back(pair);
        }
        sort(v.begin(), v.end());
        vector<int> res;
        for(auto pair: v){
            res.push_back(pair.second);
        }
        return res;
    }