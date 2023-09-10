Node* solve(Node* node, int data){
            if(node==nullptr){
                return new Node(data);
            }
            if(node->data==data){
                return node;
            }else if(node->data<data){
                node->right = solve(node->right, data);
            }else{
                node->left = solve(node->left, data);
            }
            return node;
        }
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            return solve(node, data);
        }