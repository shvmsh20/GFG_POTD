int countPairs(vector<int> &arr, int target) {
        // Your code here
        int i=0, j=arr.size()-1, res = 0;
        sort(arr.begin(), arr.end());
        while(i<j){
            if((arr[i]+arr[j]) < target){
                res+= (j-i);
                i++;
            }else{
                j--;
            }
        }
        return res;
    }