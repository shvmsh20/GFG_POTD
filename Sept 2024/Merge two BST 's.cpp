void solve(Node* curr, vector<int> &v){
        if(!curr){
            return;
        }
        solve(curr->left, v);
        v.push_back(curr->data);
        solve(curr->right, v);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
         vector<int> v1, v2;
         solve(root1, v1);
         solve(root2, v2);
         int i=0, j=0, n = v1.size(), m = v2.size();
         vector<int> res;
         while(i<n && j<m){
             if(v1[i]<=v2[j]){
                 res.push_back(v1[i]);
                 i++;
             }else{
                 res.push_back(v2[j]);
                 j++;
             }
         }
         while(i<n){
             res.push_back(v1[i]);
             i++;
         }
         while(j<m){
             res.push_back(v2[j++]);
         }
         return res;
    }