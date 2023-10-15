 Node* createBST(vector<int>& arr, int l, int r){
        if (l > r) return nullptr;
        int mid = l + (r - l)/2;
        Node* root = new Node(arr[mid]);
        root -> left = createBST(arr,l,mid-1);
        root -> right = createBST(arr,mid+1,r);
        
        return root;
    }
    void inorder(Node* root, vector<int>& arr){
        if (!root) return ;
        inorder(root -> left, arr);
        arr.push_back(root -> data);
        inorder(root -> right, arr);
    }
    Node* buildBalancedTree(Node* root)
    {
        if (root == nullptr) return nullptr;
    	vector<int>arr;
    	inorder(root,arr);
    	int n = arr.size();
    	return createBST(arr,0,n-1);
    }