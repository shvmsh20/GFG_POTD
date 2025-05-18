vector<int> findSpiral(Node* root) {
        // code here
        stack<Node*> st;
        queue<Node*> q;
        q.push(root);
        bool isEven = true;
        vector<int> res;
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* node = q.front();
                q.pop();
                res.push_back(node->data);
                if(isEven){
                    if(node->right){
                        st.push(node->right);
                    }
                    if(node->left){
                        st.push(node->left);
                    }
                }else{
                    if(node->left){
                        st.push(node->left);
                    }
                    if(node->right){
                        st.push(node->right);
                    }
                }
            }
            isEven = !isEven;
            while(!st.empty()){
                q.push(st.top());
                st.pop();
            }
        }
        return res;
    }