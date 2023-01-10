void toSumTree(Node *node)
    {
        // Your code here
        if(node){
        if(!node->left and !node->right){
            node->data = 0;
            return;
        }
        int sum = 0;
        if(node->left){
            sum += node->left->data;
            toSumTree(node->left);
            sum += node->left->data;   
        }
        if(node->right){
            sum += node->right->data;
            toSumTree(node->right);
            sum += node->right->data;
        }
        node->data = sum;
    }
    }