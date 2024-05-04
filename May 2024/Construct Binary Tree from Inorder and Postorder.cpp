Node *cTree(int in[], int post[], int &postIndex, int l, int h){
    if(l>h){
        return NULL;
    }
    Node *root = new Node(post[postIndex]);
    postIndex--;
    int inIndex;
    for(int i=l;i<=h;i++){
        if(in[i]==root->data){
            inIndex = i;
            break;
        }
    }
    root->right = cTree(in, post, postIndex, inIndex+1, h);
    root->left = cTree(in, post, postIndex, l, inIndex-1);
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postIndex = n-1;
    int l = 0;
    int h = n-1;
    Node *root = cTree(in, post, postIndex, l, h);
    return root;
}