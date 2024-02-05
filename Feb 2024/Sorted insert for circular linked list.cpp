Node *sortedInsert(Node* head, int data) {
    Node *temp = new Node(data);

    if (head == NULL) {
        temp->next = temp; // Circular link to itself for an empty list
        return temp;
    }

    Node *temp2 = head;

    if (head->data >= data) {
        while (temp2->next != head) {
            temp2 = temp2->next;
        }
        temp->next = head;
        temp2->next = temp;
        return temp;
    }

    while (temp2->next != head && temp2->next->data <= data) {
        temp2 = temp2->next;
    }

    temp->next = temp2->next;
    temp2->next = temp;
    return head;
}