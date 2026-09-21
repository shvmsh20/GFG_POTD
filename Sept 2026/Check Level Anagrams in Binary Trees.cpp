bool areAnagrams(Node* root1, Node* root2) {
        // code here
        if(root1 && !root2) return false;
                if(!root1 && root2) return false;
                queue<Node*>q1;
                queue<Node*>q2;
                q1.push(root1);
                q2.push(root2);
                while(!q1.empty() && !q2.empty()){
                    int siz1 = q1.size();
                    int siz2 = q2.size();
                    map<int,int>level1;
                    while(siz1--){
                        Node* temp = q1.front();
                        q1.pop();
                        level1[temp->data]++;
                        if(temp->left) q1.push(temp->left);
                        if(temp->right) q1.push(temp->right);
                    }
                    while(siz2--){
                        Node* temp = q2.front();
                        q2.pop();
                        if(level1[temp->data] == 0) return false;
                        else level1[temp->data]--;
                        if(temp->left) q2.push(temp->left);
                        if(temp->right) q2.push(temp->right);
                    }
                }
                if(q1.empty() && q2.empty()) return true;
                return false;
    }