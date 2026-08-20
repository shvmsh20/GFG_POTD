int solve(Node* node, int &res){
        int x = node->data;
        if(!node->left && !node->right){
            return x;
        }
        int mn = INT_MAX;
        if(node->left){
            int left = solve(node->left, res);
            res = max(res, x-left);
            mn = min(mn, left);
        }
        if(node->right){
            int right = solve(node->right, res);
            res = max(res, x-right);
            mn = min(mn, right);
        }
        return min(mn, x);
    }
    int maxDiff(Node* root) {
        // code here
        int res = INT_MIN;
        solve(root, res);
        return res;
    }