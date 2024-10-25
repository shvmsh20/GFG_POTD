vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> res;
        int left = 0, right = n-1;
        while(left<=right){
            if(left==right){
                res.push_back(arr[left]);
            }else{
                res.push_back(arr[right]);
                res.push_back(arr[left]);
            }
            left++;
            right--;
        }
        return res;
    }