vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int a = 0, b = 0, minDiff = INT_MAX;
        int i = 0, j = m - 1; // Initialize pointers for arr and brr

        while (i < n && j >= 0) 
        {
            int sum = arr[i] + brr[j];
            int diff = abs(x - sum);

            if (diff < minDiff) 
            {
                a = arr[i];
                b = brr[j];
                minDiff = diff;
            }
            (sum < x)?i++:j--; 
        }
        return {a, b};
    }