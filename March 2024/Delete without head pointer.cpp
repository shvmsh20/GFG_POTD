void deleteNode(Node *del_node)
    {
       // Your code here
         if(del_node==NULL || del_node->next==NULL){
           return;
       }
       while(del_node->next!=NULL){
           del_node->data = del_node->next->data;
           if(del_node->next->next==NULL){
               del_node->next=NULL;
               break;
           }
           del_node = del_node->next;
       }
    }