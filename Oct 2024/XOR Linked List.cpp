struct Node *insert(struct Node *head, int data) {
    // Code here
    Node *temp=new Node(data);
    temp->npx=head;
    return temp;
}

vector<int> getList(struct Node *head) {
    // Code here
    vector<int>ans;
    Node *temp1=head;
    while(temp1!=NULL){
    ans.push_back(temp1->data);
    temp1=temp1->npx;}
    return ans;
    
}