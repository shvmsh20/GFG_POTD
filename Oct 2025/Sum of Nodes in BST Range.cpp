int nodeSum(Node* root, int l, int r) {
        // code here
         if(!root) return 0;
        int ans = 0;
        if(root -> data > l) ans += nodeSum(root -> left, l, r);
        if(r > root -> data) ans += nodeSum(root -> right, l, r);
        if(root -> data >= l && root -> data <= r) ans += root -> data;
        return ans;
    }