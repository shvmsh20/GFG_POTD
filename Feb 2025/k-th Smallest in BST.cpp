int kthSmallest(Node *root, int &k) {
        // add code here.
        if(root==nullptr){
            return -1;
        }
        int left = kthSmallest(root->left, k);
        if(left!=-1){
            return left;
        }
        if(k==1){
            return root->data;
        }
        k--;
        return kthSmallest(root->right, k);
        
    }