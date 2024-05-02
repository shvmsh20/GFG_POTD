void Kdist(struct Node *root, int k, vector<int> &v){
    if(root==NULL){
        return;
    }
    if(k==0){
      v.push_back(root->data);
      return;
  }else{
      Kdist(root->left, k-1,v);
      Kdist(root->right, k-1,v);
  }
  
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> v;
  Kdist(root, k, v);
  return v;
  
}