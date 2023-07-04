int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i = 0;
        int j = 0;
        int count = 0;
        long long pro = 1;
        
        while(i<n){
            
            if(j>=n){
                i++;
                j = i;
                pro = 1;
                continue;
            }
            
            pro*=a[j];
            if(pro < k){
                j++;
                count++;
            }
            else{
                i++;
                j = i;
                pro = 1;
            }
            
        }
        return count;
        

    }