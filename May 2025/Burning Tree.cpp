Node *targetNode = nullptr;
    void inorder(Node* node, int target, unordered_map<Node*, Node*> &parent){
        if(node==nullptr){
            return;
        }
        inorder(node->left,target, parent);
        if(node->left){
            parent[node->left] = node;
        }
        if(node->right){
            parent[node->right] = node;
        }
        if(node->data==target){
            targetNode = node;
        }
        inorder(node->right, target, parent);
    }
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*> parent;
        inorder(root, target, parent);
        unordered_set<Node*> vis;
        // cout << targetNode->data << " isdh";
        int curr = 0;
        queue<Node*> q;
        q.push(targetNode);
        vis.insert(targetNode);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* node = q.front();
                q.pop();
                if(parent.find(node)!=parent.end() && vis.find(parent[node])==vis.end()){
                    vis.insert(parent[node]);
                    q.push(parent[node]);
                }
                if(node->left && vis.find(node->left)==vis.end()){
                    vis.insert(node->left);
                    q.push(node->left);
                }
                if(node->right && vis.find(node->right)==vis.end()){
                    vis.insert(node->right);
                    q.push(node->right);
                }
            }
            if(!q.empty()) curr++;
        }
        return curr;
    }