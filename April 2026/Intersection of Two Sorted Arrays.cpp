vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        int n = a.size(), m = b.size(), i = 0, j = 0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                i++;
            }else if(a[i]>b[j]){
                j++;
            }else{
                if(res.size()==0 || res.back()!=a[i]){
                    res.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }