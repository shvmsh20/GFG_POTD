set<int> join(set<int> left, set<int> right,int val)
{
    set<int> final = left;
    final.insert(right.begin(),right.end());
    final.insert(val);
    return final;
}
set<int> solve(Node* root,int k, int &ans)
{
    if(root == nullptr)
    {
        set<int> s;
        return s;
    }
    set<int> left = solve(root->left,k,ans);
    set<int> right = solve(root->right,k,ans);
    set<int> final = join(left,right,root->data);
    if(final.size()<=k)ans++;
    return final;
    
}
    int goodSubtrees(Node *root,int k){
        int ans = 0;
        set<int> s = solve(root,k,ans);
        return ans;
    }