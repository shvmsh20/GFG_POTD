int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int diff = INT_MAX, maxi=INT_MIN;
        
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        for(int i=0; i<n-2; i++) {
            int l = i+1, r = n-1;
            
            int sum = 0;
            
            while(l<r) {
                sum = arr[i]+arr[l]+arr[r];

                int temp = abs(target-sum);
                
                if(temp==diff) {
                    maxi=max(sum, maxi);
                } else if(temp<diff) maxi=sum, diff=temp;
                
                if(sum<target) l++;
                else {
                    r--;
                }

            }
        }
        
        return maxi;
    }