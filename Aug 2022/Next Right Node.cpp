int level = -1;
    
    Node *nextRight(Node *root, int key, int currLevel=1)
    {
        //code here
        if(root==nullptr){
            return new Node(-1);
        }
        if(currLevel==level){
            return root;
        }
        if(root->data==key){
            level = currLevel;
        }
        Node* l = nextRight(root->left, key, currLevel+1);
        if(l->data!=-1){
            return l;
        }
        return nextRight(root->right, key, currLevel+1);
        
    }