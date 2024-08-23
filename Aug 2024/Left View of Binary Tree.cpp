void dfs(Node* root, int level, vector<int> &res){
    if(root==NULL){
        return;
    }
    if(res.size()==level){
        res.push_back(root->data);
    }
    dfs(root->left, level+1, res);
    dfs(root->right, level+1, res);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   if(root==NULL){
       return res;
   }
   
   dfs(root, 0, res);
   return res;
}