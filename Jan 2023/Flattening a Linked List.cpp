Node* mergeLists(Node* a, Node* b) {

    // base cases

    if (a == NULL) return b;

    if (b == NULL) return a;

 

    // recursive step

    Node* result;

    if (a->data < b->data) {

        result = a;

        result->bottom = mergeLists(a->bottom, b);

    } else {

        result = b;

        result->bottom = mergeLists(a, b->bottom);

    }

 

    return result;

}

 

Node* flatten(Node* root) {

    // base case

    if (root == NULL || root->next == NULL) {

        return root;

    }

 

    // recursive step

    return mergeLists(root, flatten(root->next));
