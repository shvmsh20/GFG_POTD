Node* findLCA(Node* node, int x, int y){
        if(node==nullptr){
            return nullptr;
        }
        if(node->data==x || node->data==y){
            return node;
        }
        Node* left = findLCA(node->left, x, y);
        Node* right = findLCA(node->right, x, y);
        if(left && right){
            return node;
        }
        if(left){
            return left;
        }
        if(right){
            return right;
        }
        return nullptr;
    }
    bool dfs(Node *node, Node* lca, vector<int> &path){
        if(node==nullptr){
            return false;;
        }
        /*cout << node->data << " ";*/
        path.push_back(node->data);
        if(node==lca){
            return true;
        }
        if(dfs(node->left, lca, path)){
            return true;
        }
        if(dfs(node->right, lca, path)){
            return true;
        }
        path.pop_back();
        return false;
    }
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        Node* lca = findLCA(root, x, y);
        vector<int> path;
        dfs(root, lca, path);
        if(path.size()<k){
            return -1;
        }
        return path[path.size()-k];
        
    }