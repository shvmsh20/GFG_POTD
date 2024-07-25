Node* solve(int lo, int hi, vector<int> &nums){
        if(lo>hi){
            return nullptr;
        }
        int mid = (lo+hi)/2;
        Node* node = new Node(nums[mid]);
        node->left = solve(lo, mid-1, nums);
        node->right = solve(mid+1, hi, nums);
        return node;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        return solve(0, nums.size()-1, nums);
    }