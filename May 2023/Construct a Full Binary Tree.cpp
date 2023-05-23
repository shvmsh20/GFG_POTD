Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        int i = 0,j = size-1;
        stack<Node*>s;
        while(j >= 0){
            Node* nw = new Node(pre[i]);
            nw->left = NULL,nw->right = NULL;
            s.push(nw);
            while(!s.empty() && j >= 0 && s.top()->data == preMirror[j]){
                j--;
                if(s.size() == 1){
                    break;
                }
                else{
                    Node* nw = s.top(); s.pop();
                    if(s.top()->left == NULL){
                        s.top()->left = nw;
                    }
                    else{
                        s.top()->right = nw;
                    }
                }
            }
            i++;
        }
        return s.top();
    }