bool dfs(Node* node, int &leafLevel, int currLevel){
        if(node==nullptr){
            return true;
        }
        if(!dfs(node->left, leafLevel, currLevel+1)){
            return false;
        }
        if(!dfs(node->right, leafLevel, currLevel+1)){
            return false;
        }
        if(node->left==nullptr && node->right==nullptr){
            if(leafLevel==-1){
                leafLevel = currLevel;
                return true;
            }
            return leafLevel==currLevel;
        }
        return true;
    }
    bool check(Node *root)
    {
        //Your code here
        int leafLevel = -1, currLevel = 0;
        return dfs(root, leafLevel, currLevel);
    }