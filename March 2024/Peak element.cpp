int peakElement(int arr[], int n)
    {
       // Your code here
       int idx = 0;
        
        while (idx < n - 1 && arr[idx] <= arr[idx + 1])
            idx++;
        
        return min(idx, n - 1);
    }