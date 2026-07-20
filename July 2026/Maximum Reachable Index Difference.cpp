int maxIndexDifference(string &s) {
        // code here
        int n = s.size();
        int st = -1, res = -1;
        char x = 'a';
        for(int i=0; i<n; i++){
            if(s[i]==x){
                if(st==-1){
                    st = i;
                }
                res = max(res, i-st);
                x = x+1;
            }else if(s[i]<x && s[i]!='a') {
                res = max(res, i-st);
            }
        } 
        return res;
    }