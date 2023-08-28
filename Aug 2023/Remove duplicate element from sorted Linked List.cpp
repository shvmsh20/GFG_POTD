Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *prev = head, *curr = head->next;
 while(curr){
     if(curr->data==prev->data){
         prev->next = curr->next;
     }else{
         prev->next = curr;
         prev = prev->next;
     }
     curr = curr->next;
 }
 return head;
}