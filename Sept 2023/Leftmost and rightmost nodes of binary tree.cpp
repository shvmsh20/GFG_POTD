void printCorner(Node *root)
{

// Your code goes here
queue<Node*> q;
    q.push(root);
    int k = 0;
    Node* curr = NULL;
    while(!q.empty()){
        k = q.size();
        for(int i=0;i<k;i++){
            curr = q.front();
            q.pop();
            if(i==0 || i==k-1){
                cout << curr->data << " ";
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }

}