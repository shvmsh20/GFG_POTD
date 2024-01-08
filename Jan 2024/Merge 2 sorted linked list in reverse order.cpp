struct Node *reverse(Node* node){
        Node* prev = nullptr, *next = nullptr;
        while(node){
            next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node* dummy = new Node();
        Node* curr = dummy;
        while(node1 && node2){
            if(node1->data<=node2->data){
                curr->next = node1;
                node1 = node1->next;
            }else{
                curr->next = node2;
                node2 = node2->next;
            }
            curr = curr->next;
            curr->next = nullptr;
        }
        if(node1){
            curr->next = node1;
        }
        if(node2){
            curr->next = node2;
        }
        return reverse(dummy->next);
    }  