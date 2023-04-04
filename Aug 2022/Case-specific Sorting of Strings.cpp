string caseSort(string str, int n)
    {
        // your code here
        string u, l;
        for(int i=0; i<n; i++){
            if(str[i]>='a' && str[i]<='z'){
                l.push_back(str[i]);
            }else{
                u.push_back(str[i]);
            }
        }
        sort(l.begin(), l.end());
        sort(u.begin(), u.end());
        int i=0, j=0, k=0;
        string res;
        while(k<n){
            if(str[k]>='a' && str[k]<='z'){
                res.push_back(l[i++]);
            }else{
                res.push_back(u[j++]);
            }
            k++;
        }
        return res;
    }