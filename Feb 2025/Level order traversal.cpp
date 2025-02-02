vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> ans;
            while(n--){
                Node* front = q.front();
                q.pop();
                ans.push_back(front->data);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            res.push_back(ans);
        }
        return res;
    }