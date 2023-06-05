vector<int>arr;
    void inorder(Node * root){
        if(root!=NULL){
            inorder(root->left);
            arr.push_back(root->data);
            inorder(root->right);
        }
    }
    int minDiff(Node *root, int K)
    {
        //Your code here
        inorder(root);
        int ans = INT_MAX;
        for(auto it: arr){
            int a = abs(K-it);
            ans = min(ans, a);
        }
        return ans; 
    }