    // code here
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = m-1, index1 = 0, index2 = m-1, minDiff = INT_MAX;
        while(i<n && j>=0){
            int diff = x - (arr1[i]+arr2[j]);
            if(abs(diff)<minDiff){
                minDiff = abs(diff);
                index1 = i;
                index2 = j;
            }
            if(diff>0){
                i++;
            }else if(diff<0){
                j--;
            }else{
                return {arr1[i], arr2[j]};
            }
        }
        return {arr1[index1], arr2[index2]};
    }