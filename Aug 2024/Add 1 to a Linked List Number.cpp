Node* reverse(Node *head){
        Node *curr = head, *prev = NULL;
        while(curr!=NULL){
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    void addUtil(Node *head){
        int carry = 1, sum=0;
        Node *curr = head, *temp;
        while(curr!=NULL){
            sum = curr->data+carry;
            curr->data = sum%10;
            if(sum>=10){
                carry=1;
            }else{
                carry=0;
            }
            temp = curr;
            curr = curr->next;
        }
        if(carry==1){
            Node *temp1 = new Node(1);
            temp->next = temp1;
        }
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *h1 = reverse(head);
        addUtil(h1);
        return reverse(h1);
    }