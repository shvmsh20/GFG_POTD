int maxPathSum(vector<int> &a, vector<int> &b) {
        // Code here
        int n = a.size(), m = b.size(), res = 0, aSum=0, bSum=0, i=0, j=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                aSum+= a[i];
                i++;
            }else if(b[j]<a[i]){
                bSum+= b[j];
                j++;
            }else{
                res =  res+max(aSum, bSum)+a[i];
                aSum=0;
                bSum=0;
                i++;
                j++;
            }
        }
        while(i<n){
            aSum+= a[i++];
        }
        while(j<m){
            bSum+= b[j++];
        }
        return res+max(aSum, bSum);
    }