int n;
    bool possible(vector<int>& arr, int k,int divisor){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/divisor);
            if(sum>k)
                return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end());
        n=arr.size();
        int l=1,r=arr[n-1],ans=1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(arr,k,mid)){
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }