void inorder(Node* node, unordered_set<int> &bst1){
        if(node==nullptr){
            return;
        }
        inorder(node->left, bst1);
        bst1.insert(node->data);
        inorder(node->right, bst1);
    }
    void solve(Node* node, unordered_set<int> &bst1, int &res, int x){
        if(node==nullptr){
            return;
        }
        solve(node->left, bst1, res, x);
        if(bst1.find(x-node->data)!=bst1.end()){
            res++;
        }
        solve(node->right, bst1, res, x);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_set<int> bst1;
        inorder(root1, bst1);
        int res = 0;
        solve(root2, bst1, res, x);
        return res;
    }