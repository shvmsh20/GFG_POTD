int solve(Node* node, int &res){
        if(node==nullptr){
            return 0;
        }
        int left = solve(node->left, res);
        int right = solve(node->right, res);
        int currNodeData = node->data+left+right;
        res+= abs(currNodeData-1);
        return currNodeData-1;
    }
    int distCandy(Node* root) {
        // code here
        int res = 0;
        solve(root, res);
        return res;
    }