bool isPossible(vector<int>&arr,int k,int mid){
          int cnt=1;
          int sum=0;
          for(int i=0;i<arr.size();i++){
              if(sum+arr[i]>mid){
                  sum=arr[i];
                  cnt++;
              }
              else
              sum+=arr[i];
          }
          return cnt<=k;
      }
        int findPages(vector<int> &arr, int k) {
            if(k>arr.size())
            return -1;
           int low=*max_element(arr.begin(),arr.end());
           int high=accumulate(arr.begin(),arr.end(),0);
           int ans=-1;
           while(low<=high){
               int mid=(low+high)/2;
               if(isPossible(arr,k,mid)){
               high=mid-1;
                  ans=mid;
               }
               else
                   low=mid+1;
           }
           return ans;
        }