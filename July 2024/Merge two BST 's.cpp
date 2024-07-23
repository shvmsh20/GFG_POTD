void inorder(Node* node, vector<int> &n){
        if(node==nullptr){
            return;
        }
        inorder(node->left, n);
        n.push_back(node->data);
        inorder(node->right, n);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> n1, n2;
        inorder(root1, n1);
        inorder(root2, n2);
        vector<int> res;
        int n = n1.size(), m = n2.size();
        int i=0, j=0;
        while(i<n && j<m){
            if(n1[i]<=n2[j]){
                res.push_back(n1[i++]);
            }else{
                res.push_back(n2[j++]);
            }
        }
        while(i<n){
            res.push_back(n1[i++]);
        }
        while(j<m){
            res.push_back(n2[j++]);
        }
        return res;
    }