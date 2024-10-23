int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        Node* curr = head;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+= curr->data;
            curr = curr->next;
        }
        Node* left = head;
        while(curr){
            sum+= curr->data;
            sum-= left->data;
            curr = curr->next;
            left = left->next;
        }
        return sum;
    }