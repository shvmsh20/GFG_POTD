void solve(Node* root, int &t, int &res, int k){
    if(root==nullptr){
        return;
    }
    solve(root->left, t, res, k);
    if(t==k){
        return;
    }
    res+= root->data;
    t++;
    solve(root->right, t, res, k);
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    
    int t=0;
    int res=0;
    solve(root, t, res, k);
    return res;
    
} 