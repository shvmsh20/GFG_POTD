 void solve(Node* node, int currSum, int currLevel, int &mxLevel, int &res){
        if(node==nullptr){
            return;
        }
        int newLevel = currLevel+1;
        int newSum = currSum+node->data;
        if(mxLevel<newLevel){
            res = newSum;
            mxLevel = newLevel;
        }else if(mxLevel==newLevel){
            res = max(res, newSum);
        }
        solve(node->left, newSum, newLevel, mxLevel, res);
        solve(node->right, newSum, newLevel, mxLevel, res);
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int level = 0;
        int mxLevel = 0, res = 0;
        solve(root, 0, 0, mxLevel, res);
        return res;
    }