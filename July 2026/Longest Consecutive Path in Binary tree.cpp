/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    int ans = 1;

    void dfs(Node* node, int parentValue, int length) {
        if (node == nullptr) return;

        if (node->data == parentValue + 1)
            length++;
        else
            length = 1;

        ans = max(ans, length);

        dfs(node->left, node->data, length);

        dfs(node->right, node->data, length);
    }

    int longestConsecutive(Node* root) {
        if (root == nullptr) return -1;

        dfs(root, root->data - 1, 0);

        return (ans == 1) ? -1 : ans;
    }
};
