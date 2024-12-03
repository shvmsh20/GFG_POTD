int minChar(string& str) {
        // Write your code here
        string temp = str;
        temp+='@';
        reverse(str.begin(), str.end());
        temp+=str;
        int n = temp.size();
        vector<int> lps(n, 0);
        int len = 0, i=1;
        while(i<n){
            if(temp[i]==temp[len]){
                lps[i] = len+1;
               
                len++;
                i++;
            }else {
                if(len==0){
                    lps[i] = 0;
                    i++;
                }else{
                    len = lps[len-1];
                }
            }
        }
        return str.length()-lps[n-1];
    }