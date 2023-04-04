void inorder(Node *root, vector<int> &elements) {
        if(root == NULL) return ;
        
        inorder(root->left, elements);
        elements.push_back(root->data);
        inorder(root->right, elements);
    }
    
    void fillTree(Node *root, vector<int> &elements, int &index) {
        if(root == NULL) return ;
        
        fillTree(root->left, elements, index);
        fillTree(root->right, elements, index);
        root->data = elements[index];
        ++index;
    }
    
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int> elements;
        inorder(root, elements);
        
        int index = 0;
        fillTree(root, elements, index);
    }  