Node* insertionSort(struct Node* head_ref)
    {
        //code here
        struct Node* temp=head_ref;
       while(temp->next != NULL)
       {
           struct Node* pivot = temp->next;
           struct Node* start = head_ref;
           if(pivot->data < start->data)
           {
               temp->next = pivot->next;
               pivot->next=start;
               head_ref=pivot;
               continue;
           }
           while(start->next->data<pivot->data && start!=temp)
               start=start->next;
               
           // temp=temp->next;
           if(start == temp)
               temp=temp->next;
           else{
               temp->next=pivot->next;
               pivot->next=start->next;
               start->next=pivot;
           }
       }
       return head_ref;
    }Node* insertionSort(struct Node* head_ref)
    {
        //code here
        struct Node* temp=head_ref;
       while(temp->next != NULL)
       {
           struct Node* pivot = temp->next;
           struct Node* start = head_ref;
           if(pivot->data < start->data)
           {
               temp->next = pivot->next;
               pivot->next=start;
               head_ref=pivot;
               continue;
           }
           while(start->next->data<pivot->data && start!=temp)
               start=start->next;
               
           // temp=temp->next;
           if(start == temp)
               temp=temp->next;
           else{
               temp->next=pivot->next;
               pivot->next=start->next;
               start->next=pivot;
           }
       }
       return head_ref;
    }