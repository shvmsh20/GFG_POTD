vector<int> solve(Node* node, int &res){
        if(node==nullptr){
            return { 0, 0, 0 };
        }
        vector<int> l = solve(node->left, res);
        vector<int> r = solve(node->right, res);
        if(l[2]==-1 || r[2]==-1){
            return {0, 0, -1};
        }
        if((l[2]!=0 && l[1]>=node->data) || (r[2]!=0 && r[0]<=node->data)){
            return {0, 0, -1};
        }
        int mn = node->data, mx = node->data;
        if(l[2]!=0){
            mn = l[0];
        }
        if(r[2]!=0){
            mx = r[1];
        }
        int nodesCnt = l[2]+r[2]+1;
        res = max(res, nodesCnt);
        return {mn, mx, nodesCnt};
        
    }
    int largestBst(Node *root) {
        // Your code here
        int res = 1;
        solve(root, res);
        return res;
        
    }