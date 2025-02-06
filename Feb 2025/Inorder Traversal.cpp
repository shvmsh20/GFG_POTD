void solve(Node* node, vector<int> &res){
        if(node==nullptr){
            return;
        }
        solve(node->left, res);
        res.push_back(node->data);
        solve(node->right, res);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> res;
        solve(root, res);
        return res;
    }