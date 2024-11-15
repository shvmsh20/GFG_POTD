int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest = -1, secondLargest = -1;
        for(int x: arr){
            if(x>largest){
                secondLargest = largest;
                largest = x;
            }else if(x!=largest){
                secondLargest = max(secondLargest, x);
            }
        }
        return secondLargest;
    }