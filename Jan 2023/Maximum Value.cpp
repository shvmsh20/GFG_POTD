 vector<int> maximumValue(Node* root) {
        //code here
        vector<int> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int mx = INT_MIN;
            for(int i=0; i<n; i++){
                Node * temp = q.front();
                q.pop();
                mx = max(mx, temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            res.push_back(mx);
        }
        return res;
    }