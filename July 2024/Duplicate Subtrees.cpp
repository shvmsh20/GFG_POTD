vector<Node*> ans;
    map<string,int> m;
    
    string h(Node* root){
        if(root == NULL) return "";
        string l = h(root->left);
        string r = h(root->right);
        
        string newStr = to_string(root->data) + l + r;
        
        if(m.find(newStr) != m.end() && m[newStr] == 1){
            ans.push_back(root);
        }
        m[newStr]++;
        
        return newStr;
    }
    vector<Node*> printAllDups(Node* root) {
        h(root);
        return ans;
    }