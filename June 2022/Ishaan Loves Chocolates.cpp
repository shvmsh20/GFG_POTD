
int chocolates(int arr[], int n)
{
    // Complete the function
    int res = INT_MAX;
    for(int i=0; i<n; i++){
        res = min(res, arr[i]);
    }
    return res;
    
}