vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node*> res = {nullptr, nullptr};
        while(root){
            if(root->data>key){
                res[1] = root;
                root = root->left;
            }else if(root->data<key){
                res[0] = root;
                root = root->right;
            }else{
                Node* temp = root;
                temp = temp->left;
                Node* pre = nullptr;
                while(temp){
                    pre = temp;
                    temp = temp->right;
                }
                if(pre){
                    res[0] = pre;
                }
                temp = root;
                Node* suc = nullptr;
                temp = temp->right;
                while(temp){
                    suc = temp;
                    temp = temp->left;
                }
                if(suc){
                    res[1] = suc;
                }
                break;
            }
        }
        return res;
    }