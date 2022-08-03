Node* solve(int &index, int n, int mx, int pre[]){
        if(index==n){
            return nullptr;
        }
        if(pre[index]>mx){
            return nullptr;
        }
        Node* t = newNode(pre[index]);
        index++;
        t->left = solve(index, n, t->data, pre);
        t->right = solve(index, n, mx, pre);
        return t;
    }
    Node* post_order(int pre[], int size)
    {
        //code here
        int i=0;
        return solve(i, size, INT_MAX, pre);
    }