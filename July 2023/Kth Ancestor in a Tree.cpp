void populate(Node *root, int val, vector<int> &v, vector<vector<int>> &ans){
    if(root == NULL) return;
    if(root -> data == val){
        ans.push_back(v);
        return;
    } 
    v.push_back(root -> data);
    populate(root -> left, val, v, ans);
    populate(root -> right, val, v, ans);
    v.pop_back();
    
}
int kthAncestor(Node *root, int k, int node)
{
    vector<int> v;
    vector<vector<int>> ans;
    populate(root, node, v, ans);
    
    if(!ans.size()) return -1;
    
    v = ans[0];
    reverse(v.begin(), v.end());
    
    if(v.size() < k) return -1;
    else return v[k-1];
}