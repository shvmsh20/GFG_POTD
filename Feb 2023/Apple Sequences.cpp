int appleSequences(int n, int m, string arr){
        // code here 
        int left = 0, right = 0;
        int cnt = 0, res = 0;
        while(right<n){
            if(arr[right]=='O'){
                cnt++;
            }
            right++;
            if(cnt<=m){
                res = max(res, right-left);
            }else{
                while(left<=right && cnt>m){
                    if(arr[left]=='O'){
                        cnt--;
                    }
                    left++;
                }
                
            }
        }
        return res;
    }