Node* lca(Node* root, int a, int b){
        if(root==nullptr){
            return nullptr;
        }
        if(root->data==a || root->data==b){
            return root;
        }
        Node* l = lca(root->left, a, b);
        Node* r = lca(root->right, a, b);
        if(l && r){
            return root;
        }
        if(l!=nullptr){
            return l;
        }
        if(r!=nullptr){
            return r;
        }
        return nullptr;
    }
    int dist(Node* root, int val){
        if(root==nullptr){
            return 0;
        }
        if(root->data==val){
            return 1;
        }
        int l = dist(root->left, val);
        if(l!=0){
            return 1+l;
        }
        int r = dist(root->right, val);
        if(r!=0){
            return 1+r;
        }
        return 0;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lc = lca(root, a, b);
        if(lc->data==a){
            return dist(lc, b)-1;
        }else if(lc->data==b){
            return dist(lc, a)-1;
        }else{
            int t1 = dist(lc, a);
            int t2 = dist(lc, b);
            
            return t1+t2-2;
        }
    }