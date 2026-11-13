 vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        unordered_set<int>st;
               Node* root=r1;
               queue<Node*>q;
               q.push(root);

               while(!q.empty()){
                   Node* node=q.front();
                   q.pop();
                   st.insert(node->data);
                   if(node->left) q.push(node->left);
                   if(node->right) q.push(node->right);
               }

               vector<int>ans;

               root=r2;

               q.push(root);

               while(!q.empty()){
                   Node* node=q.front();
                   q.pop();
                   if(st.find(node->data)!=st.end()) ans.push_back(node->data);
                   if(node->left) q.push(node->left);
                   if(node->right) q.push(node->right);
               }

               sort(ans.begin(), ans.end());

               return ans;
    }