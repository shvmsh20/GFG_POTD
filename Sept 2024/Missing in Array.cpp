int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int totalSum = n*(n+1)/2;
        int arrSum = 0;
        for(int x: arr){
            arrSum+=x;
        }
        return totalSum-arrSum;
    }