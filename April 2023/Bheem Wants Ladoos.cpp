void after(Node* root, int dist, int &k, int &ans){
        if(root == nullptr || root -> data < 0) return ;
        if(dist <= k){ ans += root -> data; root -> data *= -1; }
        else return;
        
        after(root -> left, dist + 1, k, ans);
        after(root -> right, dist + 1, k, ans);
    }
    
    int dist(Node * root, int &k, int home, int &ans){
        if(root == nullptr) return -1;
        if(root -> data == home){ after(root, 0, k, ans); return 0; }
        
        int left = dist(root -> left, k, home, ans);
        int right = dist(root -> right, k, home, ans);
        
        int cur = -1;
        if(left != -1){
            cur = left + 1;
        }
        else if(right != -1){
            cur = right + 1;
        }
        
        if(cur != -1 and cur <= k){ 
            after(root, cur, k, ans);
        }
        
        return cur;
    }
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        int ans = 0;
        dist(root, k, home, ans);
        return ans;
    }