int maxCircularSum(vector<int> &arr) {
        // code here
        int totalSum = 0;
        int mxSum = arr[0], mnSum = arr[0], currMxSum = 0, currMnSum = 0;
        for(int i=0; i<arr.size(); i++){
            totalSum+= arr[i];
            currMxSum+= arr[i];
            currMnSum+= arr[i];
            mxSum = max(mxSum, currMxSum);
            mnSum = min(mnSum, currMnSum);
            if(currMxSum<0) currMxSum = 0;
            if(currMnSum>0) currMnSum = 0;
        }
        if(mxSum<0) return mxSum;
        return max(mxSum, totalSum-mnSum);
    }