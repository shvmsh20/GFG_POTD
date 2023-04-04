long long maxArea(long long A[], int len)
{
    // Your code goes here
     int left=0;

    int right=len-1;

    int ans =0;

    while(left<right){

        int tempwater=min(A[left],A[right])*(right-left);

        ans=max(ans,tempwater);

        if(A[left]<A[right])left++;

        else{

            right--;

        }

    }
    return ans;
}