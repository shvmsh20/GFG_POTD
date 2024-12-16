int kthElement(vector<int>& arr1, vector<int>& arr2, int k) {
        // code here
        int n = arr1.size(), m = arr2.size();
        if(n>m){
            return kthElement(arr2, arr1, k);
        }  
        int lo = 0, hi = n;
        int l1, l2, r1, r2;
        if(k>m){
            lo = k-m;
        }
        if(k<n){
            hi = k;
        }
        while(lo<=hi){
            int cut1 = (lo+hi)/2;
            int cut2 = k-cut1;
            l1 = cut1==0?INT_MIN:arr1[cut1-1];
            l2 = cut2==0?INT_MIN:arr2[cut2-1];
            r1 = cut1==n?INT_MAX:arr1[cut1];
            r2 = cut2==m?INT_MAX:arr2[cut2];
            if(l1>r2){
                hi = cut1-1;
            }else if(l2>r1){
                lo = cut1+1;
            }else{
                return max(l1, l2);
            }
        }
        return -1;
    }