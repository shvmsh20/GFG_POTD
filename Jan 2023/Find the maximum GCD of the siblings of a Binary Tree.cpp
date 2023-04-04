int maxGCD( Node* root)
    {
        //code here
        queue<Node*> q;
        q.push(root);
        
        int ans = 0;
        int max_gcd = 0;
        
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0; i < size; i++)
            {
                Node* curr = q.front();
                q.pop();
                
                if(curr->left){
                    q.push(curr->left);
                    
                }
                if(curr->right){
                    q.push(curr->right);
                }
                
                if(curr->left && curr->right){
                    int curr_gcd = __gcd(curr->left->data, curr->right->data);
                    if(curr_gcd >= max_gcd){
                        max_gcd = curr_gcd;
                        ans = curr->data;
                    }
                }
            }
            
            
        }
        return ans;
    }