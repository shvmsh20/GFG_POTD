 void convert(Node *head, TreeNode *&root) {
    // Your code here
    root = new TreeNode(head->data);
    queue<TreeNode *> q;
    q.push(root);
    head= head->next;
    while(head!=NULL){
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *leftChild = new TreeNode(head->data);
        temp->left = leftChild;
        q.push(leftChild);
        head = head->next;
        if(head){
            TreeNode *rightChild = new TreeNode(head->data);
            head = head->next;
            temp->right = rightChild;
            q.push(rightChild);
        }
        
    }
    