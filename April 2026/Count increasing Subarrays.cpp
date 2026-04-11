int countIncreasing(vector<int>& arr) {
        // code here.
         int n=arr.size();
        int count=0,sum=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                count++;
                sum+=count;
            }else{
                count=0;
            }
        }
        return sum;
    }