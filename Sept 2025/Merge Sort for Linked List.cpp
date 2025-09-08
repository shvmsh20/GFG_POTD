Node* mergeTwoLists(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data <= l2->data) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

Node* getMiddle(Node* head) {
    if (!head) return head;
    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* mergeSort(Node* head) {
    if (!head || !head->next) return head;

    Node* middle = getMiddle(head);
    Node* nextHalf = middle->next;
    middle->next = nullptr;

    Node* left = mergeSort(head);
    Node* right = mergeSort(nextHalf);

    return mergeTwoLists(left, right);
}