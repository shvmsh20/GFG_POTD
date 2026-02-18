int merge(int lo, int mid, int hi, vector<int> &arr){
        int res = 0, i=lo, j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=hi){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                res+= mid-i+1;
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=hi){
            temp.push_back(arr[j]);
            j++;
        }
        int index = 0;
        while(lo<=hi){
            arr[lo] = temp[index];
            index++;
            lo++;
        }
        return res;
        
    }
    int solve(int lo, int hi, vector<int> &arr){
        if(lo>=hi) return 0;
        int mid = (lo+hi)/2;
        int res = solve(lo, mid, arr);
        res+= solve(mid+1, hi, arr);
        res+= merge(lo, mid, hi, arr);
        return res;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        return solve(0, n-1, arr);
    }