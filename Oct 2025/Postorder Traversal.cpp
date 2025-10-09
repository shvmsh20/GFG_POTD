void solve(Node* node, vector<int> &res){
        if(node==nullptr) return;
        solve(node->left, res);
        solve(node->right, res);
        res.push_back(node->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> res;
        solve(root, res);
        return res;
    }