int findPair(int n, int x, vector<int> &arr) {
        // code here
        int i=0;
        int j=1;
         
        sort(arr.begin(),arr.end());
        while(i<n&&j<n)
        {
            if(abs(arr[j]-arr[i])==x&&i!=j)
            return 1;
            
            if(arr[j]-arr[i]>x)
            i++;
            else
            j++;
        }
  
        return -1;
    }