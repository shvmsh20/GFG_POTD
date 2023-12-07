long calc(int a[],int n,int high)
    {
        long  ans=0l;
        int prev=0l;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=high)
            {
                int len=i+1;
                ans=ans+(prev+1)*1l*(n-i);
                prev=0;
            }
            else 
            {
                prev+=1l;
            }
        }
        return ans;
    }
    long countSubarrays(int a[], int n, int L, int R)
    {
        long count1=calc(a,n,R+1);
        long count2=calc(a,n,L);
        return count2-count1;
    }