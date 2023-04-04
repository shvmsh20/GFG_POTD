Node *reverse(Node *head, int k)
    {
        // code here
        Node* curr = head;

        Node* prev = NULL;

         Node* forward = NULL;

        

        for(int i=0;i<k;i++){

            forward = curr->next;

            curr->next = prev;

            prev = curr;

            curr = forward;

        }

        Node* ans = prev;

        curr = forward;

        prev = NULL;

        while(curr!=NULL){

            Node*nxt = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nxt;

        }

        head->next = prev;

        return ans;
    }