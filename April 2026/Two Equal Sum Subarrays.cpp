bool canSplit(vector<int>& arr) {
        // code here
        int totalSum = 0;
        for(int x: arr){
            totalSum+= x;
        }
        if(totalSum%2) return false;
        int currSum = 0;
        for(int x: arr){
            currSum+= x;
            if(currSum>totalSum/2){
                return false;
            }else if(currSum==totalSum/2){
                return true;
            }
        }
        return false;
    }