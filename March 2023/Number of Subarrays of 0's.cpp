long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
     long long int count=0;
    long long int len=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            len++;
        else{
            count+= (len*(len+1)/2);
            len=0;
            }
        
    }
       count+= (len*(len+1)/2);
    return count;
}