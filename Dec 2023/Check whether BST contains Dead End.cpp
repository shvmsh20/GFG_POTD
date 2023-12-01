void inorder_traversal(Node *root, vector<pair<int, bool>> &res){
        if(root==nullptr){
            return;
        }
        inorder_traversal(root->left, res);
        if(root->left==nullptr && root->right==nullptr){
            res.push_back({root->data, true});
        }else{
             res.push_back({root->data, false});
        }
        inorder_traversal(root->right, res);
    }
    bool solve(vector<pair<int, bool>> &res){
        for(int i=1; i<res.size(); i++){
            if(res[i].second && (res[i-1].first+1==res[i].first) && (res[i].first+1==res[i+1].first)){
                return true;
            }
            
        }
        return false;
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        vector<pair<int, bool>> inorderValues;
        inorderValues = {{0, false}};
        inorder_traversal(root, inorderValues);
        return solve(inorderValues);
    }