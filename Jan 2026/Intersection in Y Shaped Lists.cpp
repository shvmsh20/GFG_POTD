Node* intersectPoint(Node* h1, Node* h2) {
        //  Code Here
         Node *a=h1,*b=h2;
        while(a!=b){
            if(!a) a=h2;
            if(!b) b=h1;
            a=a->next;
            b=b->next;
        }
        
        return a;
    }