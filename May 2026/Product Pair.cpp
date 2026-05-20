bool check(int st, int end, vector<int> &arr, long long target){
        while(st<end){
            long long tmp = (long long)arr[st]*arr[end];
            if(tmp==target){
                return true;
            }else if(tmp<target){
                st++;
            }else{
                end--;
            }
        }
        return false;
    }
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        sort(arr.begin(), arr.end());
        int negEnd = -1, n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]>=0){
                break;
            } else {
                negEnd = i;
            }
        }
        if(target>=0){
            if(check(negEnd+1, n-1, arr, target)){
                return true;
            }
            if(negEnd!=-1){
                if(check(0, negEnd, arr, target)){
                    return true;
                }
            }
        }else{
            int i=0, j=negEnd+1;
            
            while(i<=negEnd && j<n){
                long long tmp = (long long)arr[i]*arr[j];
                if(tmp==target){
                    return true;
                }else if(tmp<target){
                    i++;
                }else{
                    j++;
                }
            }
        }
        return false;
    }