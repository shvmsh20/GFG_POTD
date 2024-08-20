Node* createParentMapping(Node* root, int target, map<Node*, Node*> &nodeToParent){
        Node* res = NULL;
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            
            if(front-> data == target){
                res = front;
            }
            
            if(front -> left){
                nodeToParent[front -> left] = front;
                q.push(front -> left);
            }
            if(front -> right){
                nodeToParent[front -> right] = front;
                q.push(front -> right);
            }
        }
        return res;
    }
    
    int burnTree(Node* root, map<Node*, Node*> &nodeToParent){
        
        map<Node*, bool> visited;
        queue<Node*> q;
        int ans = 0;
        
        
        q.push(root);
        visited[root] = 1;
        
        while(!q.empty()){
            int size = q.size();
            bool flag = 0;
            for(int i=0;i<size;i++){
                //process
                Node* front = q.front();
                q.pop();
                
                if(front -> left && visited[front -> left]==0){
                    q.push(front -> left);
                    visited[front -> left] = 1;
                    flag = 1;
                }
                if(front -> right && visited[front -> right]==0){
                    q.push(front -> right);
                    visited[front -> right] = 1;
                    flag = 1;
                }
                if(nodeToParent[front] && visited[nodeToParent[front]]==0){
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                    flag = 1;
                }
            }
            if(flag == 1){
                ans++;
            }
        }
        return ans;
    }
    
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*, Node*> nodeToParent;
        Node* targ = createParentMapping(root, target, nodeToParent);
        
        int ans = burnTree(targ, nodeToParent);
        return ans;
    }