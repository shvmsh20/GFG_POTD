string sumString(string s1, string s2){
    //   cout << s1 << " " << s2 << endl;
       int n = s1.size(), m = s2.size();
       reverse(s1.begin(), s1.end());
       reverse(s2.begin(), s2.end());
       int carry = 0, i = 0, j = 0;
       string res;
       while(i<n || j<m || carry){
           int first = i<n ? s1[i]-'0' : 0;
           int second = j<m ? s2[j]-'0' : 0;
           int sum = first+second+carry;
           res+= to_string(sum%10);
           carry = sum/10;
           i++;
           j++;
       }
     reverse(res.begin(), res.end());
    //   cout << res  << endl;
       return res;
   }
   bool solve(int beg, int len1, int len2, int n, string &s){
       string s1 = s.substr(beg, len1);
       string s2 = s.substr(beg+len1, len2);
       string s3 = sumString(s1, s2);
       int len3 = s3.size();
       if(len3>(n-(beg+len1+len2))){
           return false;
       }
       string candidate = s.substr(beg+len1+len2, len3);
       if(candidate==s3){
           if(beg+len1+len2+len3==n){
               return true;
           }
           return solve(beg+len1, len2, len3, n, s);
       }else{
           return false;
       }
   }
    bool isSumString(string &s) {
        // code here
        int n = s.size();
        for(int i=1; i<n; i++){
            for(int j=1; i+j<n; j++){
                if(solve(0, i, j, n, s)){
                    return true;
                }
            }
        }
        return false;
        
    }