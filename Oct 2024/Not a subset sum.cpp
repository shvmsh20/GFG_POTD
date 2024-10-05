long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        long long curr = 1;
        for(auto it:arr){
            if(curr<it) return curr;
             curr+=it;
        }
        return curr;
    }