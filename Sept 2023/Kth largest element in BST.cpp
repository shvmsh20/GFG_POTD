 int  revInorder(Node *node, int &k){
        if(node==nullptr){
            return INT_MIN;
        }
        int ans = revInorder(node->right, k);
        if(ans!=INT_MIN){
            return ans;
        }
        if(k==1){
            return node->data;
        }
        k--;
        return revInorder(node->left, k);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        return revInorder(root, k);
    }