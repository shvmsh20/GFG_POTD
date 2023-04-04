int ind = 0;
    void getSum(vector<int>& temp,vector<int>&temp2){
        int sum = 0;
        int n = temp.size();
        for(int i=n-1;i>=0;i--){
            temp2[i] = sum;
            sum+=temp[i];
        }
    }
    void inOrder(struct Node *root,vector<int>& temp){
        if(root == NULL){
            return;
        }
        inOrder(root->left,temp);
        temp.push_back(root->data);
        inOrder(root->right,temp);
    }
    void modifyTree(struct Node *root,vector<int>& temp2){
        if(root == NULL){
            return;
        }
        modifyTree(root->left,temp2);
        root->data = temp2[ind++];
        modifyTree(root->right,temp2);
    }
    void transformTree(struct Node *root)
    {
        //code here
        vector<int> temp;
        inOrder(root,temp);
        vector<int> temp2(temp.size());
        getSum(temp,temp2);
        modifyTree(root,temp2);
    }