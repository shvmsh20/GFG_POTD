int x;

    int BinarySearch(vector<int> a,int s,int e,int k){
        if(s<=e)
        {
            int m=(s+e)/2;
            if(a[m]==k)
            {
                return m;
            }
            else if(k>a[m])
            {
                return BinarySearch(a,m+1,e,k);
            }
            else if(k<a[m])
            {
                 return BinarySearch(a,s,m-1,k);

            }
        }
        return e+1;
    }
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        return BinarySearch(Arr,0,N-1,k);
        
    }