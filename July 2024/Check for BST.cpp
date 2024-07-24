void inorder(Node* node, vector<int> &nodes){
        if(node==nullptr){
            return;
        }
        inorder(node->left, nodes);
        nodes.push_back(node->data);
        inorder(node->right, nodes);
    }
    bool isBST(Node* root) {
        // Your code here
        vector<int> nodes;
        inorder(root, nodes);
        int n = nodes.size();
        for(int i=0; i<n-1; i++){
            if(nodes[i]>nodes[i+1] || (nodes[i]==nodes[i+1])){
                return false;
            }
        }
        if(n>=2 && nodes[n-2]>nodes[n-1]){
            return false;
        }
        return true;
    }