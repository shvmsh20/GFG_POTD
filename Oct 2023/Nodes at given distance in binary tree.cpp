
    map<Node*, Node*>parent;
    Node* tar;
    vector<int>ans;
public:

   
    
    void findparent(Node* root, int target, Node* p){
        if(root == nullptr) return;
        parent[root] = p;
        if(root->data == target) tar = root;
        findparent(root->left, target, root);
        findparent(root->right, target, root);
    }
     
    void solve(Node* node, int dis, Node* prev){
        if(node == nullptr) return;
        if(dis == 0){
            ans.push_back(node->data);
            return;
        }
        if(node->left != prev)
        solve(node->left, dis-1, node);
        
        if(node->right != prev)
        solve(node->right, dis-1, node);
        
        if(parent[node] != prev)
        solve(parent[node], dis-1, node);
    }
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        parent.clear();
        ans.clear();
        findparent(root , target, nullptr);
       
        solve(tar, k, nullptr);
        sort(ans.begin(), ans.end());
        return ans;
    }