void solve(Node *node, unordered_map<int, int> &mp, int prefixSum, int &res, int k){
        if(node==nullptr){
            return;
        }
        prefixSum+= node->data;
        if(mp.find(prefixSum-k)!=mp.end()){
            res+= mp[prefixSum-k];
        }
        mp[prefixSum]++;
        solve(node->left, mp, prefixSum, res, k);
        solve(node->right, mp, prefixSum, res, k);
        mp[prefixSum]--;
    }
    int countAllPaths(Node *root, int k) {
        // code here
        unordered_map<int, int> mp;
        int prefixSum = 0, res = 0;
        mp[0] = 1;
        solve(root, mp, prefixSum, res, k);
        return res;
    }