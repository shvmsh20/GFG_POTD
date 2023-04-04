//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if (K > num)
	return head;
	
Node *pre_kth_from_head = NULL;
Node *kth_from_head = head;

for (int i = 1; i < K; ++i)
{
	pre_kth_from_head = kth_from_head;
	kth_from_head = kth_from_head->next;
}
	
//cout << (pre_kth_from_head ? pre_kth_from_head->data : -1) << " ";
//cout << (kth_from_head ? kth_from_head->data : -1) << " ";

Node *pre_kth_from_tail = NULL;
Node *kth_from_tail = head;
Node *tail = kth_from_head->next;

while (tail)
{
	pre_kth_from_tail = kth_from_tail;
	kth_from_tail = kth_from_tail->next;
	tail = tail->next;
}

//cout << (pre_kth_from_tail ? pre_kth_from_tail->data : -1) << " ";
//cout << (kth_from_tail ? kth_from_tail->data : -1) << endl;

if (pre_kth_from_tail == NULL)
{
	swap(pre_kth_from_tail, pre_kth_from_head);
	swap(kth_from_tail, kth_from_head);
}

if (pre_kth_from_head == NULL)
{
	kth_from_tail->next = kth_from_head->next;
	pre_kth_from_tail->next = kth_from_head;
	kth_from_head->next = NULL;
	head = kth_from_tail;
}
else
{
	pre_kth_from_head->next = pre_kth_from_tail->next;
	pre_kth_from_tail->next = kth_from_head;
	
	Node *tmp = kth_from_tail->next;
	kth_from_tail->next = kth_from_head->next;
	kth_from_head->next = tmp;
}

return head;
}