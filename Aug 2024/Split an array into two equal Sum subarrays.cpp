bool canSplit(vector<int>& arr) {
        // code here
        int totalSum = 0;
        for(int x: arr){
            totalSum+= x;
        }
        int currSum = 0;
        for(int x: arr){
            currSum+=x;
            totalSum-=x;
            if(currSum==totalSum){
                return true;
            }
        }
        return false;
    }