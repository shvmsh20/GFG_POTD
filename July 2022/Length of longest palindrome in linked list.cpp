int util(Node* l1, Node* l2){
    int res=0;
    while(l1 && l2){
        if(l1->data==l2->data){
            res++;
        }else{
            return res;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return res;
}
int maxPalindrome(Node *head)
{
    //Your code here
    Node* curr = head, *prev = nullptr;
    int ans = 1;
    while(curr!=nullptr){
        Node* next = curr->next;
        curr->next = prev;
        ans = max(ans, 2*util(prev, next)+1);
        ans = max(ans, 2*util(curr, next));
        prev = curr;
        curr = next;
    }
    return ans;
}