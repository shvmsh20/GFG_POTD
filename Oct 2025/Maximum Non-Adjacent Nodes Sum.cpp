int solve(Node *node, int canPick, map<pair<Node*, int>, int> &dp){
        if(node==nullptr){
            return 0;
        }
        if(dp.find({node, canPick})!=dp.end()){
            return dp[{node, canPick}];
        }
        int res = 0;
        if(canPick){
            res = node->data + solve(node->left, 0, dp) + solve(node->right, 0, dp);
        }
        res = max(res, solve(node->left, 1, dp) + solve(node->right, 1, dp));
        return dp[{node, canPick}] = res;
    }
    int getMaxSum(Node *root) {
        // code here
        map<pair<Node*, int>, int> dp;
        return solve(root, 1, dp);
    }