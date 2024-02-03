long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
            int mod=1e9+7;
          long long unsigned int ans=0;
          Node* prev=NULL;
          while(head){
              Node* next=head->next;
              head->next=prev;
              prev=head;
              head=next;
          }
          long long unsigned int pow=1;
          while(prev){
              if(prev->data) ans=(ans+pow)%mod;
              pow=(pow*2)%mod;
              prev=prev->next;
          }
          return ans%mod;
        }