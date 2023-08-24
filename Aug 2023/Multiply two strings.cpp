string multiplyStrings(string s1, string s2) {
       //Your code here
       int i = 0;
       //excluding zeroes at back
       while(i < s1.size() && s1[i] == '0')
            i++;
        if(i == s1.size())
            return "0";
            
        bool neg = false;
        //checking for negative
        if(s1[i] == '-'){
            neg = true;
            i++;
        }
        s1 = s1.substr(i);
        i = 0;
        //excluing zeroes at back
        while(i < s2.size() && s2[i] == '0')
            i++;
        if(i == s2.size())
            return "0";
            
        //checking for negative
        if(s2[i] == '-'){
            neg = !neg;
            i++;
        }
        s2 = s2.substr(i);
        
        //chosing the larger as s1
       if(s1.size() < s2.size())
            swap(s1, s2);
       vector<int>curr(s1.size() + 2, 0);
       string ans;
       int j = s2.size() - 1;
       while(j >= 0){
           i = s1.size() - 1;
           int last = 0;
           while( i >= 0){
               int res = ((s1[i] - '0')*(s2[j] - '0') + curr[last]);
               curr[last] = res%10;
               last++;
               curr[last] = curr[last] + (res/10);
               i--;
           }
           //taking the last digit(ready digit) to our answer. 
           //Because in future there won't be any more changes to this digit
           ans = to_string(curr[0]) + ans;
           
           //shifting 0th(i.e. the last digit) digit (which we will not need in future)
           for(int k = 0; k<curr.size() - 1; k++){
               curr[k] = curr[k+1];
           }
           j--;
        }
       i = 0;
       
       for(int k = 0; k<curr.size(); k++)
        ans = to_string(curr[k]) + ans;
       //removing zeroes at back
       while(i < ans.size() && ans[i] == '0')
        i++;
        ans = ans.substr(i);
       return (neg?"-":"") + ans;
    }