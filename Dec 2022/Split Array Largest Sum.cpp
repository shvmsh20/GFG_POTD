bool check(int a[],int n, int k, int mid){

        int cnt=1;

        int sum=0;

        for(int i=0;i<n;i++){

            sum+=a[i];

            if(sum>mid){

                cnt++;

                sum=a[i];

                if(a[i]>mid){

                    return false;

                }

            }

        }

        if(cnt<=k){

            return true;

        }

        else{

            return false;

        }

    }

 

    int splitArray(int a[] ,int n, int k) {

        // code here

        int l=0,r=1e9,ans=1e9;

        while(l<=r){

            int mid=(l+r)/2;

            if(check(a,n,k,mid)){

                ans=mid;

                r=mid-1;

            }

            else{

                l=mid+1;

            }

        }

        return ans;

    }