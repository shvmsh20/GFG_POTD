int height(Node *root){
        if(root==NULL) return 0;
        
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    
    void fun(Node *root,vector<int> &v,int i,int l){
        if(root==NULL) return;
        v[l]=root->data;                // as tree traversal is in-order so the vales are  overwritten for every level with last value of that level in vector v.
        fun(root->left,v,i-1,l+1);    //left call
        fun(root->right,v,i+1,l+1); //right call
    }
    vector<int> rightView(Node *root)
    {
     
       int n=height(root);
       
       vector<int>v(n,0);
       
       fun(root,v,0,0);
       
       return v;
    }