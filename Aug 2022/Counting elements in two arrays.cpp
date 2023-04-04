vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    sort(arr2, arr2+n);
    vector<int> res;
    for(int i=0; i<m; i++){
        int ele = arr1[i];
        int count = upper_bound(arr2, arr2+n, ele) - arr2;
        res.push_back(count);
    }
    return res;
    
    }