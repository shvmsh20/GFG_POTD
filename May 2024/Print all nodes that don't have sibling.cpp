vector<int> noSibling(Node* node)
{
    // code here
    vector<int> ans;
    queue<Node*> q;
    q.push(node);

    while (!q.empty()) {
        Node* root = q.front();
        q.pop();

        if (root->left && !root->right) {
            ans.push_back(root->left->data);
            q.push(root->left);
        }

        if (!root->left && root->right) {
            ans.push_back(root->right->data);
            q.push(root->right);
        }

        if (root->left && root->right) {
            q.push(root->left);
            q.push(root->right);
        }
    }

    if (ans.empty()) {
        return {-1};
    }
    sort(ans.begin(), ans.end());

    return ans;
}