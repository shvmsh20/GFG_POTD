int subarraySum(vector<int>& arr) {
        // code here
          int n = arr.size();
        int x = 0;
        int y = n-1;
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum = sum + (x+1) *(y+1) *(arr[i]);
            x++;
            y--;
        }
        return sum;
    }