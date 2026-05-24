int coin(vector<int>& arr) {
        // code here
        int i=0, j=arr.size()-1;
        while(i<j){
            if(arr[i]>=arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return arr[i];
    }