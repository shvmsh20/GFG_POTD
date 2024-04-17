int merge(int lo, int mid, int hi, int arr[]){
        vector<int> temp;
        int i=lo, j=mid+1;
        int res = 0;
        while(i<=mid && j<=hi){
            if(arr[i]>arr[j]){
                res+= (mid-i+1);
                temp.push_back(arr[j]);
                j++;
            }else{
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=hi){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=lo; i<=hi; i++){
            arr[i] = temp[i-lo];
        }
        return res;
    }
    int countInversion(int lo, int hi, int arr[]){
        if(lo>=hi){
            return 0;
        }
        int mid = lo+(hi-lo)/2;
        int res = countInversion(lo, mid, arr);
        res+= countInversion(mid+1, hi, arr);
        res+= merge(lo, mid, hi, arr);
        return res;
    }
    int countPairs(int arr[] , int n ) 
    {
        // Your code goes here   
        for(int i=0; i<n; i++){
            arr[i] *= i;
        }
        return countInversion(0, n-1, arr);
    }