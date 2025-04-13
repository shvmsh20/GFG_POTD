unordered_map<Node*, Node*> mp;
    Node* cloneGraph(Node* node) {
        // code here
        if(mp.find(node)!=mp.end()){
            return mp[node];
        }
        Node* clonedNode = new Node(node->val);
        mp[node] = clonedNode;
        for(Node* neigh: node->neighbors){
            Node* clonedNeigh = cloneGraph(neigh);
            clonedNode->neighbors.push_back(clonedNeigh);
        }
        return clonedNode;
    }