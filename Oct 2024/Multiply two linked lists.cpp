long long multiplyTwoLists(Node *first, Node *second) {
        // code here
         Node*temp1=first;
        Node*temp2=second;
        long long num1=0;
        
        while(temp1!=NULL)
        {
            num1=num1*10+temp1->data;
            temp1=temp1->next;
        }
        
        long long num2=0;
        while(temp2!=NULL)
        {
            num2=num2*10+temp2->data;
            temp2=temp2->next;
        }
       
       long long ans=(num1*num2)%1000000007;
       return ans;
    }