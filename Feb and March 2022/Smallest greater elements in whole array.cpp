int res[100001];
int binarySearch(vector<int> &v, int l, int r, int x)
{
    int ans=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (v[m] == x){
            ans = m;
            l = m+1;
        }
        else if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
 
   
    return ans+1;
}
int* greaterElement(int arr[], int n)
{
    // Complete the function
    vector<int> v;
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        int temp = binarySearch(v, 0, n-1, arr[i]);
        if(temp==n){
            res[i] = -10000000;
        }else{
            res[i] = v[temp];
        }
    }
    
    return res;
}    