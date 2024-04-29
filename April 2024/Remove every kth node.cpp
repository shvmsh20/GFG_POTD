Node* deleteK(Node *head,int k){
      //Your code here
      if(head==NULL or k<=0 or k==1) 
      return NULL;
     
      Node* temp=head;
      Node* prev=NULL;
      int count=0;
      
      while(temp!=NULL){
          count++;
          if(count%k==0){
              prev->next=temp->next;
          }
          prev=temp;
          temp=temp->next;
      }
      return head;
    }