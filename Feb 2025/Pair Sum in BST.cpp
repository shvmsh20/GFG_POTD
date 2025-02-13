oid inorder(Node* node, vector<int> &values){
        if(node==nullptr){
            return;
        }
        inorder(node->left, values);
        values.push_back(node->data);
        inorder(node->right, values);
    }
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int> values;
        inorder(root, values);
        int st = 0, end = values.size()-1;
        while(st<end){
            if(values[st]+values[end]==target){
                return true;
            }else if(values[st]+values[end]<target){
                st++;
            }else{
                end--;
            }
        }
        return false;
    }