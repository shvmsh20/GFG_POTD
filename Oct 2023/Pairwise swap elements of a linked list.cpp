Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node *newnode = new Node(0);
        Node *first ,*second;
        Node * p = newnode;
        
       while(head && head -> next){
          first = head; 
          second = head -> next;
          head = second -> next;
          p -> next = second;
          p = p-> next;
          p -> next = NULL;
          p -> next = first;
          p = p -> next;
          p -> next = NULL;
        }
        
        // to handle the odd element
        if(head){
            p -> next = head;
            
        }
      return newnode -> next;
    
    }