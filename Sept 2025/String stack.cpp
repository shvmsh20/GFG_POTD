bool stringStack(string &pat, string &tar) {
        // code here
        int i = pat.size()-1, j = tar.size()-1;
        int lastIndex = pat.size();
        while(i>=0 && j>=0){
            if(pat[i]==tar[j]){
                if((lastIndex-i-1)%2==0){
                    j--;
                    lastIndex = i;
                }
            }
            i--;
        }
        return j<0;
    }