int res = INT_MIN;
    int solve(Node* root){
        if(root==nullptr){
            return 0;
        }
        int left = solve(root->left);
        int right = solve(root->right);
        res = max(res, (root->data)+left+right);
        int temp = root->data+left+right;
        res = max(res, temp);
        //cout << res << endl;
        return temp;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        solve(root);
        return res;
    }