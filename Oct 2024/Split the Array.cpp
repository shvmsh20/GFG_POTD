int countgroup(vector<int>& arr) {
        // Complete the function
         int a=0;
        int y;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            a=a^arr[i];
        }
        if(a!=0){
            return 0;
        }
        return (int)pow(2,n-1)-1;
    }