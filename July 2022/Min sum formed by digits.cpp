long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr, arr+n);
        long long int i=0, j=1;
        long long int n1=0, n2=0;
        while(i<n || j<n){
            if(i<n){
                n1 = arr[i]+n1*10;
                i+=2;
            }
            if(j<n){
                n2 = arr[j]+n2*10;
                j+=2;
            }
        }
       //cout << n1 << " " << n2 << endl;
        long long int res = n1+n2;
        return res;
    }