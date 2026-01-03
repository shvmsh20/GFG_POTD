 Node* merge(Node* left, Node* right){
        Node* dummy = new Node(0);
        Node* prev = dummy;
        while(left && right){
            if(left->data<=right->data){
                prev->bottom = left;
                left = left->bottom;
            }else{
                prev->bottom = right;
                right = right->bottom;
            }
            prev = prev->bottom;
        }
        if(left){
            prev->bottom = left;
        }
        if(right){
            prev->bottom = right;
        }
        return dummy->bottom;
    }
    Node* mergeSort(Node* left, Node* right){
        if(right==nullptr){
            return left;
        }
        right = mergeSort(right, right->next);
        return merge(left, right);
    }
    Node *flatten(Node *root) {
        // code here
       return mergeSort(root, root->next);
    }