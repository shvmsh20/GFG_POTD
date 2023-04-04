class MyComp {
  public:
    bool operator() (Node* a, Node* b) {
        return a->data > b->data;
    };
};

    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
        priority_queue<Node*, vector<Node*>, MyComp> pQueue;
        for(int i = 0; i < K; i++) pQueue.push(arr[i]);
        Node *head = NULL;
        Node *tail = NULL;
        
        while(!pQueue.empty()) {
            Node *cur = pQueue.top(); pQueue.pop();
            if(cur->next) pQueue.push(cur->next);
            
            if(head) {
                tail->next = cur;
                tail = tail->next;
                cur->next = NULL;
            } else {
                head = tail = cur;
            }
        }
        
        return head;
    }