Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;
        
        int n = arr.size();
        for(int i=0; i<n; i++) {
            Node* node = arr[i];
            pq.push(make_pair(node->data, node));
        }
        
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        
        while(pq.size()) {
            Node* topNode = pq.top().second;
            temp->next = topNode;
            pq.pop();
            Node* nextNode = topNode->next;
            if(nextNode) pq.push(make_pair(nextNode->data, nextNode));
            temp = temp->next;
        }
        
        return dummy->next;
    }