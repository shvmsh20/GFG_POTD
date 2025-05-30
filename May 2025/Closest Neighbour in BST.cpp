int findMaxFork(Node* node, int k) {
        // code here
        int res = -1;
        while(node){
            if(node->data>k){
                node = node->left;
            }else if(node->data<k){
                res = node->data;
                node = node->right;
            }else{
                return k;
            }
        }
        return res;
    }