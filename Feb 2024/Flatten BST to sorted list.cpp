Node* solve(Node*root){
        if(root==nullptr){
            return root;
        }
        Node*r1 = solve(root->left);
        Node*r2 = solve(root->right);
        root->left = nullptr;
        if(r1==nullptr){
            Node*head = root;
            head->right = r2;
            return head;
        }
        else{
            Node*r=r1;
            while(r1->right){
                r1 = r1->right;
            }
            r1->right = root;
            root->right = r2;
            return r;
        }
    }
    public:
        Node *flattenBST(Node *root)
        {
            return solve(root);
        }