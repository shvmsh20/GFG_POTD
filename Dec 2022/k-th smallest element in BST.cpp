void sol(Node *root, int &k, int &res){
        if(root==NULL) return;
        sol(root->left, k, res);
        if(k==1){
            res = root->data;
            k--;
        }else{
            k--;
        }
        sol(root->right, k, res);
    }
    int KthSmallestElement(Node *root, int &K) {
        // add code here.
        int res = -1;;
        sol(root, K, res);
        return res;
    }