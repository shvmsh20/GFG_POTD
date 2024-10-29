struct Node* partition(struct Node* head,struct Node* tail)
    {
        // Select the first node as the Pivot node
        Node* pivot = head;
        
        // 'pre' and 'curr' are used to shift all smaller nodes data to leftside of the pivot node
        Node* pre = head;
        Node* curr = head;
        
        // Traverse the list until reach to the node after the tail
        while(curr != tail->next)
        {   
            // if current node's data is less than the pivot's data
            if(curr->data < pivot->data)
            {
                // Swap the data Between "curr" ans "pre->next" 
                swap(curr->data,pre->next->data);
                // Move "pre" to the next node
                pre = pre->next;
            }
            // Mode "curr" to the next node
            curr = curr->next;
        }
        // Swap the pivot's data with pre data
        swap(pivot->data,pre->data);
        // Return "pre" as the new pivot
        return pre;
    }
    void quickSortHelper(struct Node* head,struct Node* tail)
    {
        //Base Case: if the list is empty or consists of a singlenode
        if(!head || head==tail) return ;
        
        // Call partition to find the pivot node
        Node* pivot =partition(head,tail);
        
        // Recursive call for the left part of the list(before the pivot)
        quickSortHelper(head,pivot);
        
        // Recursive call for the right part of the list(after the pivot)
        quickSortHelper(pivot->next,tail);
    }
  public:
    struct Node* quickSort(struct Node* head) {
        // Edge case : if the list is empty or consists of a single node
        if(!head || !head->next) return head;
        
        // Find the tail node (last node of the list)
        Node* temp = head;
        while(temp->next)
            temp = temp->next;
        
        // Tail points to the last node
        Node* tail = temp;
        
        // Call quickSortHelper to sort the list
        quickSortHelper(head,tail);
        
        // Return the head of the sorted list
        return head;
    }