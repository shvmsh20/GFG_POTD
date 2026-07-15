int bitonic(vector<int> &arr) {
        // code here
         int n = arr.size();
        if (n == 0) return 0; // Handle empty array boundary case
        
        int len = 1, ans = 1;
        bool inc = 1;
        int eq = 0; // Tracks consecutive equal elements
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i-1]) {
                if (inc == 1) {
                    len++;
                } else {
                    // Reset length to include the current pair plus any preceding equal elements
                    len = eq + 2; 
                    inc = 1;
                }
                eq = 0; // Reset equal count on a strict increase
            }
            else if (arr[i] < arr[i-1]) {
                if (inc == 1) {
                    inc = 0;
                }
                len++;
                eq = 0; // Reset equal count on a strict decrease
            }
            else {
                len++;
                eq++; // Track the equal elements in case a transition follows
            }
            ans = max(ans, len);
        }
        return ans;
    }