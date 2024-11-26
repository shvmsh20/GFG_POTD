int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n = arr.size();
        int totSum = 0;
        int currMax = 0, currMin = 0, maxSoFar = arr[0], minSoFar = arr[0];
        for(int i=0; i<n; i++){
            currMax = max(arr[i], arr[i]+currMax);
            currMin = min(arr[i], arr[i]+currMin);
            maxSoFar = max(maxSoFar, currMax);
            minSoFar = min(minSoFar, currMin);
            totSum+= arr[i];
        }
        if(maxSoFar<0){
            return maxSoFar;
        }
        return max(maxSoFar, totSum-minSoFar);
    }