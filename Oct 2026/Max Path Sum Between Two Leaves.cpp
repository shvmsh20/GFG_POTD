int solve(Node* root, int& maxSum) {

           if (!root) {
               return -1e5;
           }

           if (root->left == NULL && root->right == NULL) {
               return root->data;
           }

           int left = solve(root->left, maxSum);
           int right = solve(root->right, maxSum);

           if (left != -1e5 && right != -1e5) {
               maxSum = max(maxSum, left + right + root->data);
           }

           return max(left + root->data, right + root->data);
       }
       int maxPathSum(Node *root) {
           // code here

           int maxSum = INT_MIN;

           solve(root, maxSum);


           return maxSum == INT_MIN ? -1 : maxSum;
       }