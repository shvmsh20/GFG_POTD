Node* reverse(Node*head){
      Node*prev=NULL;
      Node*next;
      Node*curr=head;
      while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
      }
      return prev;
  }
    Node* addTwoLists(Node* num1, Node* num2) {
        while(num1->data==0){
            num1=num1->next;
        }
         while(num2->data==0){
            num2=num2->next;
        }
        
        Node*n1=reverse(num1);
        Node*n2=reverse(num2);
        Node*temp=new Node(-1);
        Node*sum=temp;
        int carry=0;
        while(n1!=NULL&&n2!=NULL){
            int a=n1->data;
            int b=n2->data;
            int digit=a+b+carry;
            carry=digit/10;
           int value=digit%10;
            Node*newNode=new Node(value);
            temp->next=newNode;
            temp=newNode;
            n1=n1->next;
            n2=n2->next;
        }
        while(n1!=NULL){
            int a=n1->data;
            int digit=a+carry;
             carry=digit/10;
          int  value=digit%10;
           
             Node*newNode=new Node(value);  
               temp->next=newNode;
               temp=newNode;
            
            n1=n1->next;
        }
            
        
        while(n2!=NULL){
            int b=n2->data;
            int digit=b+carry;
             carry=digit/10;
           int value=digit%10;
           
             Node*newNode=new Node(value);  
             temp->next=newNode;
            temp=newNode;
            n2=n2->next;
           
            
        }
        while(carry!=0){
            int digit=carry%10;
            if(digit==0){
                break;
            }
            carry=carry/10;
            Node*newNode=new Node(digit);
            temp->next=newNode;
            temp=newNode;
        }
        Node*ans=reverse(sum->next);
        return ans;
        
    }