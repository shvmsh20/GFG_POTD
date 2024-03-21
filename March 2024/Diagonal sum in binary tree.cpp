vector <int> diagonalSum(Node* root) {
        // Add your code here
        vector<int> v;
    int sum=0;
    queue<Node *> q;
    
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        sum=0;
        for(int i=0;i<size;i++){
            Node *temp = q.front();
            q.pop();
            while(temp!=NULL){
                sum+=temp->data;
                if(temp->left){
                    q.push(temp->left);
                }
                temp=temp->right;
            }
        }
        v.push_back(sum);
    }
    return v;
    }