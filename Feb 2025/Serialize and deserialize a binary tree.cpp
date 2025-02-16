void inorder(Node* root,vector<int> &arr){
        if(!root)
            return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
        return;
    }
    
    vector<int> serialize(Node *root) {
        // Your code here
        vector<int> arr;
        inorder(root,arr);
        return arr;
        
    }
    Node* deSerializeHelper(int l,int r,vector<int> arr){
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        Node* root = new Node(arr[m]);
        root->left = deSerializeHelper(l,m-1,arr);
        root->right = deSerializeHelper(m+1,r,arr);
        return root;
    }
    
    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr) {
        // Your code here
        return deSerializeHelper(0,arr.size()-1,arr);
    }