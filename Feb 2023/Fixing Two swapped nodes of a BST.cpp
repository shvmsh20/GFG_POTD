void correctTree(Node* curr, unordered_map<int, int> &mp){
        if(curr==nullptr){
            return;
        }
        correctTree(curr->left, mp);
        if(mp.find(curr->data)!=mp.end()){
            curr->data = mp[curr->data];
        }
        correctTree(curr->right, mp);
    }
    void inorder(Node* root, vector<int> &res){
        if(root==nullptr){
            return;
        }
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    struct Node *correctBST(struct Node *root) {
        // code here
        vector<int> curr;
        inorder(root, curr);
        vector<int> sorted = curr;
        sort(sorted.begin(), sorted.end());
        int n = curr.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            if(curr[i]!=sorted[i]){
                mp[curr[i]] = sorted[i];
            }
            if(mp.size()==2){
                break;
            }
        }
        correctTree(root, mp);
        return root;
        
    }