Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
          Node * link =NULL;
        Node * head =NULL;
        
        while(head1!=NULL && head2 !=NULL){
            
            if(head1->data == head2->data){
                
                if(link==NULL){
                    
                    link = new Node(head2->data);
                    
                    head=link;
                }
                else{
                    
                    link->next = new Node (head2->data);
                    link = link->next;
                }
                
                head1=head1->next;
                head2= head2->next;
            }
         
            else if(head1->data < head2->data){
                
                head1=head1->next;
                
            }
            else{
                
                   head2=head2->next;
            }
        }
        
        return head;
    }