int getLastOcc(int st, int end, vector<int> &arr, int target){
        int res = -1;
        while(st<=end){
            int mid = (st+end)/2;
            if(arr[mid]==target){
                res = mid;
                st = mid+1;
            }else if(arr[mid]<target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return res;
    }
    int getFirstOcc(int st, int end, vector<int> &arr, int target){
        int res = -1;
        while(st<=end){
            int mid = (st+end)/2;
            if(arr[mid]==target){
                res = mid;
                end = mid-1;
            }else if(arr[mid]<target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return res;
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int lastOcc = getLastOcc(0, n-1, arr, target);
        if(lastOcc==-1){
            return 0;
        }
        int firstOcc = getFirstOcc(0, n-1, arr, target);
        return lastOcc-firstOcc+1;
    }