long long util(Node *root){
        if(root==NULL) return 1;
        return root->data*max(util(root->left), util(root->right));
    }
    long long findMaxScore(Node* root)
    {
        // Your code goes here
        return util(root);
    }