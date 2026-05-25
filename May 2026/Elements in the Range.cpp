bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int index = 0, n = arr.size();
        while(index<n && arr[index]!=start){
            index++;
        }
        if(index==n) return false;
        int curr = start;
        for(int i=index; i<n && curr<=end; i++){
            if(arr[i]!=curr) return false;
            curr++;
        }
        if(curr<end) return false;
        return true;
    }