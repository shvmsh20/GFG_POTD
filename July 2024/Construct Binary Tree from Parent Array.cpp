Node *createTree(vector<int> parent) {
        // Your code here
        Node* root = nullptr;
        unordered_map<int, Node*> mp;
        for(int i=0; i<parent.size(); i++){
            
            Node* node = nullptr;
            if(mp.find(i)!=mp.end()){
                node = mp[i];
            }else{
                node = new Node(i);
                mp[i] = node;
            }
            int p = parent[i];
            if(p==-1){
                root = node;
                continue;
            }
            Node* parentNode = nullptr;
            if(mp.find(p)!=mp.end()){
                parentNode = mp[p];
            }else{
                parentNode = new Node(p);
                mp[p] = parentNode;
            }
            if(!parentNode->left){
                parentNode->left = node;
            }else{
                parentNode->right = node;
            }
        }
        return root;
    }