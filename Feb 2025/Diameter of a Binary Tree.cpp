int res = 0;
    int solve(Node* node){
        if(node==nullptr){
            return 0;
        }
        if(node->left==nullptr && node->right==nullptr){
            return 1;
        }
        int left = solve(node->left);
        int right = solve(node->right);
        res = max(res, left+right);
        return max(left, right)+1;
    }
    int diameter(Node* root) {
        // Your code here
        solve(root);
        return res;
    }