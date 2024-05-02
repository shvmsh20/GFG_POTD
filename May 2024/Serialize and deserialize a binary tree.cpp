void ser(Node *root, vector<int> &v){
        if(root==NULL){
            v.push_back(-1);
            return;
        }
        v.push_back(root->data);
        ser(root->left, v);
        ser(root->right, v);
        return;
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> v;
        ser(root, v);
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       
       
           Node *temp = new Node(-1);
           if(A[0]==-1){
               A.erase(A.begin()+0);
               return NULL;
            }
       temp->data = A[0];
       A.erase(A.begin()+0);
       temp->left = deSerialize(A);
       temp->right = deSerialize(A);
       return temp;
    
}