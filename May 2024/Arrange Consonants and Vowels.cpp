struct Node* arrangeCV(Node* head) {
        // Code here
         Node* consonants=new Node(-1);
        Node* tempc=consonants;
        Node* vowels=new Node(-1);
        Node* tempv=vowels;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u'){
                Node* something=new Node(temp->data);
                something->next=NULL;
                tempv->next=something;
                tempv=tempv->next;
            }
            else{
                Node* anything=new Node(temp->data);
                anything->next=NULL;
                tempc->next=anything;
                tempc=tempc->next;
            }
            temp=temp->next;
        }
        tempv->next=consonants->next;
        return vowels->next;
    }