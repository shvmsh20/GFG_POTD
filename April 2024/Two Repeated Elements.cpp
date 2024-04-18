vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        int xr = 0;
        for(int i=0; i<n+2; i++){
            xr = xr ^ arr[i];
        }
        for(int i=1; i<=n; i++){
            xr = xr ^ i;
        }
        int lastDiffBit = xr & (~(xr-1));
        int x = 0, y = 0;
        for(int i=0; i<n+2; i++){
            if(arr[i] & lastDiffBit){
                x = x ^ arr[i];
            }else{
                y = y ^ arr[i];
            }
        }
        for(int i=1; i<=n; i++){
            if(i & lastDiffBit){
                x = x ^ i;
            }else{
                y = y ^ i;
            }
        }
        int xCnt = 0, yCnt = 0;
        for(int i=0; i<n+2; i++){
            if(arr[i]==x){
                xCnt++;
            }
            if(arr[i]==y){
                yCnt++;
            }
            
            if(xCnt==2){
                return {x, y};
            }
            if(yCnt==2){
                return {y, x};
            }
        }
        return {};
    }