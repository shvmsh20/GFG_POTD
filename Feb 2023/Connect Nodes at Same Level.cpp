void connect(Node *root)
    {
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            Node* temp1=q.front();
            q.pop();
            if(temp1==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
                continue;
            }
            Node* temp2=q.front();
            temp1->nextRight=temp2;
            
            if(temp1->left)
            {
                q.push(temp1->left);
            }
            
            if(temp1->right)
            {
                q.push(temp1->right);
            }
        }
    }