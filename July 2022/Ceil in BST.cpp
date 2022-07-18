int findCeil(Node* root, int input) {
    int ans = -1;
    Node* curr = root;
    while(curr!=nullptr){
        if(curr->data==input){
            return input;
        }else if(curr->data<input){
            curr = curr->right;
        }else{
            ans = curr->data;
            curr = curr->left;
        }
    }
    return ans;

    
}