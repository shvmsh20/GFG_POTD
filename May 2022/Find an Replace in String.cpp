bool check(string &s1, int index, int n, string &s2){
        int i=index, j=0;
        while(i<n && j<s2.length()){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }else{
                return false;
            }
        }
        return i<=n && j==s2.length();
    }
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
        string res="";
        int j=0, n = S.size();
        for(int i=0; i<S.size(); i++){
            if(j<Q && i==index[j]){
                if(check(S, i, n, sources[j])){
                    res = res+targets[j];
                    i = i+sources[j].size()-1;
                }else{
                    res = res + S[i];
                }
                j++;
            }
            else{
                res = res+S[i];
            }
            
        }
        return res;
    }