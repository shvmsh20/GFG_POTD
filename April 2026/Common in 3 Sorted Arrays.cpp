vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> res;
        int n1 = a.size(), n2 = b.size(), n3 = c.size();
        int i=0, j=0, k=0;
        while(i<n1 && j<n2 && k<n3){
            if(a[i]==b[j] && b[j]==c[k]){
                if(res.size() == 0 || res.back()!=a[i]){
                    res.push_back(a[i]);
                }
                i++;
                j++;
                k++;
            }else{
                int mx = max(a[i], max(b[j], c[k]));
                if(a[i]!=mx){
                    i++;
                }
                if(b[j]!=mx){
                    j++;
                }
                if(c[k]!=mx){
                    k++;
                }
            }
        }
        return res;
    }