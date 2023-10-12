unordered_map<string,int> mp;
    string solve(Node* root)
    {
        if(root==NULL)
        {
            return "$";
        }
        
        string s = "";
        
        if(root->left == NULL and root->right == NULL)
        {
             s += to_string(root->data);
            return s;
        }
        
        s =   solve(root->left) + to_string(root->data)+ solve(root->right);
    
        
        mp[s]++;
        return s;
    }
    
    int dupSub(Node *root) {
         
         solve(root);
         for(auto i:mp)
         {
             if(i.second >=2) return 1;
         }
         
         return 0;
    }