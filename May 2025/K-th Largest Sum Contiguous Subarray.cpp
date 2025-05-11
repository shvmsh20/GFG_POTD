int kthLargest(vector<int> &arr, int k) {
        // code here
        vector<int> temp;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int curr = 0;
            for(int j=i; j<n; j++){
                curr+= arr[j];
                temp.push_back(curr);
            }
        }
        sort(temp.begin(), temp.end());
        int m = temp.size();
        return temp[m-k];
    }