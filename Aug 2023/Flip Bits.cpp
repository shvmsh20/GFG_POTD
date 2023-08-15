int maxOnes(int a[], int n)
    {
        // Your code goes here
        int co=0,sum=0,maxsum=0;
        for(int i=0;i<n;i++){
            if(a[i] == 0)
                sum+=1;
            else{
                sum-=1;
                co++;
            }
            maxsum=max(sum,maxsum);
            if(sum < 0)
                sum=0;
        }
        return co+maxsum;
    }