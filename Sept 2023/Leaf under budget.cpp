int res = 0;
    void solve(Node* node, int &k, int level){

        if(node->left==nullptr && node->right==nullptr){
            if(k>=level){
                res++;
                k-= level;
            }else{
                return;
            }
        }
        
        if(node->left) solve(node->left, k, level+1);
        if(node->right) solve(node->right, k, level+1);
    }
    int getCount(Node *root, int k)
    {
        //code here
        solve(root, k, 1);
        return res;
    }