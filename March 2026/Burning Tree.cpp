int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*> parent;
        queue<Node*> q;
        q.push(root);
        Node* targetNode = nullptr;
        while(!q.empty()){
            Node* node = q.front();
            if(node->data==target){
                targetNode = node;
            }
            q.pop();
            if(node->left){
                parent[node->left] = node;
                q.push(node->left);
            }
            if(node->right){
                parent[node->right] = node;
                q.push(node->right);
            }
        }
        int time = 0;
        unordered_set<Node*> s;
        s.insert(targetNode);
        q.push(targetNode);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* node = q.front();
                q.pop();
                if(node->left){
                    if(s.find(node->left)==s.end()){
                        s.insert(node->left);
                        q.push(node->left);
                    }
                }
                if(node->right){
                    if(s.find(node->right)==s.end()){
                        s.insert(node->right);
                        q.push(node->right);
                    }
                }
                if(parent.find(node)!=parent.end()){
                    Node* parentNode = parent[node];
                    if(s.find(parentNode)==s.end()){
                        q.push(parentNode);
                        s.insert(parentNode);
                    }
                }
            }
            if(q.size()) time++;
        }
        return time;
        
    }