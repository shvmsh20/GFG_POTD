Node* build(vector<int>& values, int lo, int hi){

    if(lo > hi){
        return NULL;
    }

    int mid = lo + (hi-lo) / 2;

    Node* root = new Node(values[mid]);

    root->left = build(values, lo, mid-1);
    root->right = build(values, mid+1, hi);

    return root;
}

void helper(vector<int>& values, Node* root, int data){
    if(!root){
        return ;
    }

    helper(values,root->left,data);

    if(root->data != data){
        values.push_back(root->data);
    }

    helper(values,root->right,data);
}

Node* deleteNode(Node* root, int data){
    vector<int> values;

    helper(values,root,data);

    return build(values,0,values.size()-1);
}