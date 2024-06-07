int maxOccured(int n, int L[], int R[], int maxx) {

        // Your code here
        int a[maxx+1]={0};
        for(int i=0;i<n;i++){
            a[L[i]]++;
            a[R[i]+1]--;
        }
        int prefix=0;
        int curr=0;
        int ans;
        for(int i=0;i<=maxx;i++){
            curr+=a[i];
            if(curr>prefix){
                prefix=curr;
                ans=i;
            }
        }
        return ans;
    }