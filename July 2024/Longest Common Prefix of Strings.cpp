string longestCommonPrefix(vector<string> arr) {
        // your code here
        int N = arr.size();
        int l=0;
        bool flag = false;
        while(true){
            for(int i=0;i<N;i++){
                if(l==arr[i].size()){
                    flag = true;
                    break;
                }
                if(arr[i][l]!=arr[0][l]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
            l++;
        }
        if(l==0){
            return "-1";
        }
        string ans = arr[0].substr(0, l);
        return ans;
    }