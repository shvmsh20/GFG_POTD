void precompute()
    {
        // Code Here
        for(int i=0; i<62; i++){
            for(int j=i+1; j<62; j++){
                for(int k=j+1; k<62; k++){
                    long long a = (long long)(1L<<i);
                    a = (long long)(1L<<j) | a;
                    a = (long long)(1L<<k) | a;
                    arr.push_back(a);
                    //cout << a << " ";
                }
            }
        }
        sort(arr.begin(), arr.end());
    }
    
    long long solve(long long l, long long r){
        // Code Here
        
        
        long long res, left = 0, right = arr.size()-1;
        while(left<=right){
            long long mid = left+(right-left)/2;
            if(arr[mid]==l){
                res = mid;
                break;
            }else if(arr[mid]<l){
                left = mid+1;
            }else{
                res = mid;
                right = mid-1;
            }
        }
        int a = res;
        res = 0;
        left = 0, right = arr.size()-1;
        while(left<=right){
            long long mid = left+(right-left)/2;
            if(arr[mid]==r){
                res = mid;
                break;
            }else if(arr[mid]<r){
                res = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        
        
        int b = res;
        if(a<=b){
            return b-a+1;
        }else{
            return 0;
        }
    }