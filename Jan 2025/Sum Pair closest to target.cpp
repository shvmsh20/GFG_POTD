vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        int lo = 0, hi = arr.size()-1;
        int res1 = INT_MIN, res2 = INT_MAX;
        while(lo<hi){
            int possAns = arr[lo]+arr[hi];
            if(possAns==target){
                return {arr[lo], arr[hi]};
            }else if(possAns<target){
                if(res1==INT_MIN || (target-possAns)<abs((res1+res2)-target)){
                    res1 = arr[lo];
                    res2 = arr[hi];
                }else if((target-possAns)==abs((res1+res2)-target) &&
                ((arr[hi]-arr[lo])>(res2-res1))){
                    res1 = arr[lo];
                    res2 = arr[hi];
                }
                lo++;
            }else{
                if(res1==INT_MIN || (possAns-target)<abs((res1+res2)-target)){
                    res1 = arr[lo];
                    res2 = arr[hi];
                }else if((possAns-target)==abs((res1+res2)-target) &&
                ((arr[hi]-arr[lo])>(res2-res1))){
                    res1 = arr[lo];
                    res2 = arr[hi];
                }
                hi--;
            }
        }
        if(res1!=INT_MIN){
            return {res1, res2};
        }else{
            return {};
        }
    }