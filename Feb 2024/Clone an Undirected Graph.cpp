Node* solve(Node* node, unordered_map<Node*, Node*> &mp, unordered_set<Node*> &vis){
        if(mp.find(node)==mp.end()){
            mp[node] = new Node(node->val);
        }
        Node* clonedNode = mp[node];
        vis.insert(node);
        vector<Node*> neigh;
        for(Node* x: node->neighbors){
            if(vis.find(x)==vis.end()){
                neigh.push_back(solve(x, mp, vis));
            }else{
                neigh.push_back(mp[x]);
            }
        }
        clonedNode->neighbors = neigh;
        return clonedNode;
        
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> mp;
        unordered_set<Node*> vis;
        return solve(node, mp, vis);
    }