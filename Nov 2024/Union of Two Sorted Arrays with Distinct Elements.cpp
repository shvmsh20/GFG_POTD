vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int n = a.size(), m = b.size(), i=0, j=0;
        vector<int> res;
        while(i<n && j<m){
            if(a[i]==b[j]){
                res.push_back(a[i]);
                i++;
                j++;
            }else if(a[i]<b[j]){
                res.push_back(a[i]);
                i++;
            }else{
                res.push_back(b[j]);
                j++;
            }
        }
        while(i<n){
            res.push_back(a[i++]);
        }
        while(j<m){
            res.push_back(b[j++]);
        }
        return res;
    }