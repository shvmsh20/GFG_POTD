Node* reverse(Node* head) {
        // code here
        Node* hh=head;
        // unordered_map<Node*,bool> visited;
        // Node* p=NULL;
        // Node* p1=head;
        // while(!visited[p1]){
        //     visited[p1]=true;
        //     p=p1;
        //     p1=p1->next;
            
        // }
        // p->next=NULL;
        Node* p=head;
        while(p->next != hh){
            p=p->next;
        }
        
        p->next=NULL;
        
        p=NULL;
        Node* c=head;
        Node* n=head;
        while(n){
            n=n->next;
            c->next=p;
            p=c;
            c=n;
        }
        
        hh->next=p;
        return p;
        
        
        
        
        
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        Node* p=head;
        Node* n=head->next;
        
        if(p==n)
            return NULL;
        if(head->data == key){
            Node* last=head;
            while(last->next != head)
                last=last->next;
            
            last->next=head->next;
            head=head->next;
            return head;
        }
        
        
        
        
        
        while(n->data != key){
            p=n;
            n=n->next;
            if(n==head)
                return head;
        }
        
        p->next=n->next;
        n->next=NULL;
        // if(head->data == key)
        //     head=p->next;
        return head;
        
    }