void inorder(Node* node, vector<int> &nodeData){
        if(node==nullptr){
            return;
        }
        inorder(node->left, nodeData);
        nodeData.push_back(node->data);
        inorder(node->right, nodeData);
    }
    void solve(Node* node, vector<int> &nodeData, int &index){
        if(node==nullptr){
            return;
        }
        solve(node->left, nodeData, index);
        node->data = nodeData[index];
        index++;
        solve(node->right, nodeData, index);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> nodeData;
        inorder(root, nodeData);
        sort(nodeData.begin(), nodeData.end());
        int index = 0;
        solve(root, nodeData, index);
        return root;
    }