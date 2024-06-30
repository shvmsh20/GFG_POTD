Node*findnode(Node*head,int x)
  {
      int count=1;
      Node*temp=head;
      while(count!=x)
      {
          temp=temp->next;
          count++;
      }
      return temp->prev;
  }
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(x==1)return head->next;
        Node*temp=findnode(head,x);
        temp->next->prev=temp;
        temp->next=temp->next->next;
        return head;
        
    }