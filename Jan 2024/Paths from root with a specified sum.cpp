void solve(Node *node, int currSum, int sum, vector<int> &ans, vector<vector<int>> &res){
        if(node==nullptr){
            return;
        }
        currSum += node->key;
        ans.push_back(node->key);
        if(currSum==sum){
            res.push_back(ans);
        }
        solve(node->left, currSum, sum, ans, res);
        solve(node->right, currSum, sum, ans, res);
        ans.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>> res;
        vector<int> ans;
        solve(root, 0, sum, ans, res);
        return res;
    }