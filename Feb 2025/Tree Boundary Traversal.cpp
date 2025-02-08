void helper(Node* root,vector<int>&v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(root->data!=-1) v.push_back(root->data);
            root->data=-1;
            return;
        }
        helper(root->left,v);
        helper(root->right,v);
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        Node* temp=root;
        while(temp){
            ans.push_back(temp->data);
            temp->data=-1;
            if(temp->left==NULL && temp!=root) temp=temp->right;
            else temp=temp->left;
        }
        helper(root,ans);
        int l=ans.size();
        temp=root;
        temp=temp->right;
        while(temp && temp->data!=-1){
            ans.push_back(temp->data);
            temp->data=-1;
            if(temp->right==NULL) temp=temp->left;
            else temp=temp->right;
        }
        if(l>=ans.size()) return ans;
        int r=ans.size()-1;
        while(l<r){
            swap(ans[l],ans[r]);
            l++;
            r--;
        }
        return ans;
    }