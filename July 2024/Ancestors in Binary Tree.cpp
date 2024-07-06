Node* solve(Node *root, int target,vector<int>&ans){
        if (root==NULL) return root;
        if (root->data==target) return root;
        Node* left=solve(root->left,target,ans);
        Node* right=solve(root->right,target,ans);
        if (!left and right){
            ans.push_back(root->data);
        }
        else if (!right and left){
            ans.push_back(root->data);
        }
        else return NULL;
    }
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        if (root==NULL) return {};
        vector<int> ans;
        Node* a=solve(root,target,ans);
        return ans;
    }