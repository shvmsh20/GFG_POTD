int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        int res = 0, i=0, j=0, n = arr1.size(), m=arr2.size();
        int s1 = 0, s2 = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                s1+=arr1[i];
                i++;
            }else if(arr2[j]<arr1[i]){
                s2+=arr2[j];
                j++;
            }else{
                res += max(s1, s2);
                res += arr1[i];
                i++;
                j++;
                s1 = 0;
                s2 = 0;
            }
        }
        while(i<n){
            s1+= arr1[i++];
        }
        while(j<m){
            s2+= arr2[j++];
        }
        res+= max(s1, s2);
        return res;
        
    }