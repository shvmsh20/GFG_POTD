vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    queue<Node *> q;
    
    q.push(root);
    while(!q.empty()) 
    {
        auto p = q.front();
        q.pop();
        
        res.push_back(p->data);
        
        if(p->right)
            q.push(p->right);
            
        if(p->left)
            q.push(p->left);
    }
    
    reverse(res.begin(), res.end());
    return res;
}