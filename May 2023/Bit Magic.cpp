 int bitMagic(int n, vector<int> &arr) {
        // code here
         int i=0, j=n-1;
        int cnt=0;
        while(i<j){
            if(arr[i]!=arr[j])
                cnt++;
            i++, j--;
        }
        if(cnt%2!=0)
            return cnt/2 + 1;
        else 
            return cnt/2;
    }