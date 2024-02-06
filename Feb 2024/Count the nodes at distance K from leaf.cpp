void solve(Node* node, vector<Node*> &path, unordered_set<Node*> &vis, int k){
        if(node==nullptr){
            return;
        }
        path.push_back(node);
        int n = path.size();
        if(node->left==nullptr && node->right==nullptr && n>k){
            vis.insert(path[n-k-1]);
        }
        solve(node->left, path, vis, k);
        solve(node->right, path, vis, k);
        path.pop_back();
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	vector<Node*> path;
    	unordered_set<Node*> vis;
    	solve(root, path, vis, k);
    	return vis.size();
    }