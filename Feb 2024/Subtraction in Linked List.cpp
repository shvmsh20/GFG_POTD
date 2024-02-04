Node* addLeadingZeros(Node* head, int len){
        Node* temp;
        while(len>0){
            temp= new Node(0);
            temp->next= head;
            head=temp;
            len--;
        }
        return head;
    }
    Node* subtract(Node *l, Node *s, int &borrow){
        if(l==NULL) return NULL;
        l->next= subtract(l->next, s->next, borrow);
        int res= l->data - s->data;
        if(borrow) --res;
        if(res<0){
            res+=10;
            borrow=1;
        }
        else borrow=0;
        l->data=res;
        return l;
    }
    int getLength(Node* Node){
        int size = 0;
        while (Node != NULL) {
            Node = Node->next;
            size++;
        }
        return size;
    }
    Node* subtract(Node *l, Node *s){
        int borrow=0;
        return subtract(l, s, borrow);
    }
    Node* removeLeadingZeros(Node* head){
        if(head==NULL || head->data>0 || (head->next==NULL)) return head;
        return removeLeadingZeros(head->next);
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        
        int len1= getLength(head1), len2= getLength(head2);
        
        Node *sNode= head1, *lNode= head2;
        if(len1!=len2){
            sNode= len1>len2?head2:head1;
            lNode= len1>len2?head1:head2;
            sNode= addLeadingZeros(sNode, abs(len1-len2));
            head1=lNode, head2=sNode;
        }
        
        Node *l1=head1, *l2=head2;
        while(l1 && l2){
            if(l1->data==l2->data){
                l1=l1->next, l2=l2->next;
                continue;
            }
            sNode= l1->data>l2->data?head2:head1;
            lNode= l1->data>l2->data?head1:head2;
            
            break;
        }
        
        return removeLeadingZeros(subtract(lNode, sNode));
    }