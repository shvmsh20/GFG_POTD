Node *targetNode;
    
    void findparent(Node *root, int target, unordered_map<Node *, Node *> &parent){
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            Node *curr = q.front();
            q.pop();
            if(curr->left){
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent[curr->right] = curr;
                q.push(curr->right);
            }
            if(curr->data==target){
                targetNode = curr;
            }
        }
    }
    int sum_at_distK(Node* root, int target, int k)
    {
        // code here
        unordered_map<Node *, Node *> parent;
        findparent(root, target, parent);
       
        
        int res=0;
        unordered_set<Node *> visited;
        visited.insert(targetNode);
        
        queue<Node *> q;
        q.push(targetNode);
        for(int i=0; i<k; i++){
            int size = q.size();
            while(size--){
                Node *curr = q.front();
                q.pop();
                res+= curr->data;
                if(curr->left && visited.find(curr->left)==visited.end()){
                    visited.insert(curr->left);
                    q.push(curr->left);
                }
                if(curr->right && visited.find(curr->right)==visited.end()){
                    visited.insert(curr->right);
                    q.push(curr->right);
                }
                if(parent[curr] && visited.find(parent[curr])==visited.end()){
                    visited.insert(parent[curr]);
                    q.push(parent[curr]);
                }
            }
        }
        while(!q.empty()){
            Node * curr = q.front();
            q.pop();
            res+= curr->data;
        }
        return res;
    }