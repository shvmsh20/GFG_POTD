bool isLengthEven(struct Node **head) {
        // Code here
        bool flag=true;
        struct Node *temp = *head;
        while(temp!=nullptr){
            flag=!flag;
            temp = temp->next;
        }
        return flag;
    }