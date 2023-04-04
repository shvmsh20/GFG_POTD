struct Node{
    Node *left;
    Node *right;
    int data;
    Node(int x){
        left = nullptr;
        right = nullptr;
        data = x;
    }
};
    Node* solve(vector<int>& nums, int i ,int j){
        if(i>j){
            return nullptr;
        }
        int m = (i+j)/2;
        Node *node = new Node(nums[m]);
        node->left = solve(nums, i, m-1);
        node->right = solve(nums, m+1, j);
        return node;
    }
    
    void preorder(Node *root, vector<int> &res){
        if(root==nullptr){
            return;
        }
        res.push_back(root->data);
        preorder(root->left, res);
        preorder(root->right, res);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n = nums.size()-1;
        Node *root = solve(nums, 0, n);
        vector<int> res;
        preorder(root, res);
        return res;
    }