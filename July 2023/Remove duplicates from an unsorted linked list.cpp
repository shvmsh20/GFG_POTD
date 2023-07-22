Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,bool> map;
     Node* temp = head;
     while(temp) {
         if(!map[temp->data]) map[temp->data] = true;
         else temp->data = -1;
         temp = temp->next;
     }
     temp = head;
     while(temp->next) {
         if(temp->next->data != -1) temp = temp->next;
         else {
             Node *t2 = temp->next;
             while(t2 && t2->data == -1) t2 = t2->next;
             if(!t2) {
                 temp->next = NULL;
                 break;
             }
             temp->next = t2;
             temp = t2;
         }
     }
     return head;
    }