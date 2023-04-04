 Node* partition(Node *l, Node *h){
        //Your code goes here
        Node* i = l;
        while(l != h){
            if(l->data <= h->data){
                swap(i->data,l->data);
                i = i->next;
            }
            l = l->next;
        }
        swap(i->data, h->data);
        return i;
    
    }