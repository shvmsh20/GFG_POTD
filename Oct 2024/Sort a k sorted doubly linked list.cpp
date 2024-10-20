DLLNode* sortAKSortedDLL(DLLNode* head, int k) {
        // Define a custom comparator for the priority queue
        auto comp = [](DLLNode* a, DLLNode* b) {
            return a->data > b->data; // Min-heap based on the node's data
        };
        
        std::priority_queue<DLLNode*, std::vector<DLLNode*>, decltype(comp)> pq(comp);

        DLLNode* cur_head = head; 
        DLLNode* ans = nullptr;
        DLLNode* cur_ans = nullptr;

        while (cur_head != nullptr) {
            pq.push(cur_head);

            if (pq.size() == k + 1) {
                DLLNode* pop = pq.top();
                pq.pop();
                if (ans == nullptr) {
                    ans = pop;
                    cur_ans = pop;
                } else {
                    cur_ans->next = pop;
                    pop->prev = cur_ans;
                    cur_ans = cur_ans->next;
                }
            }

            cur_head = cur_head->next;
        }

        while (!pq.empty()) {
            DLLNode* pop = pq.top();
            pq.pop();
            if (ans == nullptr) {
                ans = pop;
                cur_ans = pop;
            } else {
                cur_ans->next = pop;
                pop->prev = cur_ans;
                cur_ans = cur_ans->next;
            }
        }

        if (ans != nullptr) {
            ans->prev = nullptr;
        }
        if (cur_ans != nullptr) {
            cur_ans->next = nullptr;
        }

        return ans;
    }