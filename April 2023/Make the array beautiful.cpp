bool isValid(int x, int y){
        return (x<0 && y<0) || (x>=0 && y>=0);
    } 
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> res;
        int currIndex = 0, n = arr.size();
        while(currIndex<n){
            if(res.size()==0){
                if(currIndex==n-1 || isValid(arr[currIndex], arr[currIndex+1])){
                    res.push_back(arr[currIndex]);
                    currIndex++;
                }else{
                    currIndex+=2;
                }
            }else{
                if(isValid(res.back(), arr[currIndex])){
                    res.push_back(arr[currIndex]);
                }else{
                    res.pop_back();
                }
                currIndex++;
            }
        }
        return res;
    }