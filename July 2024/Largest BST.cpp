struct NodeVal{
        int mn;
        int mx;
        int count;
        NodeVal(int x, int y, int z){
            count = x;
            mn = y;
            mx = z;
        }
    };
     NodeVal* solve(Node* root){
        if(root==NULL){
            return new NodeVal(0, INT_MAX, INT_MIN);
        }
        NodeVal *l = solve(root->left);
        NodeVal *r = solve(root->right);
        if(root->data>l->mx && root->data<r->mn){
            int count = l->count+r->count+1;
            int mn = min(root->data, l->mn);
            int mx = max(root->data, r->mx);
            NodeVal* t = new NodeVal(count, mn, mx);
            return t;
        }else{
            int count = max(l->count, r->count);
            return new NodeVal(count, INT_MIN, INT_MAX);
        }
    }
    int largestBst(Node *root)
    {
    	//Your code here
    	NodeVal *t = solve(root);
    	return t->count;
    }