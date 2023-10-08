Node *sortedInsert(struct Node* head, int data) {
        // Code here
        if (head == NULL) {
        // Handle the case when the linked list is empty
            Node* newNode = new Node(data);
            newNode->next = NULL;
            return newNode;
        }
        
        Node* node=head, *prev=NULL;
        if(node->data>data){
            Node* mid=new Node(data);
            mid->next=head;
            return mid;
        }
        while(node!=NULL){
            if(node->data>data){
                Node* mid=new Node(data);
                if(prev) prev->next=mid;
                mid->next=node;
                return head;
            }else{
                prev=node;
                node=node->next;
            }
        }
        Node* mid=new Node(data);
        prev->next=mid;
        return head;
    }