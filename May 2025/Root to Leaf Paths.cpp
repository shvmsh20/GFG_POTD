void solve(Node* node, vector<int> &curr, vector<vector<int>> &res){
        if(node==nullptr) return;
        curr.push_back(node->data);
        if(node->left==nullptr && node->right==nullptr){
            res.push_back(curr);
        }
        solve(node->left, curr, res);
        solve(node->right, curr, res);
        curr.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> res;
        vector<int> curr;
        solve(root, curr, res);
        return res;
    }