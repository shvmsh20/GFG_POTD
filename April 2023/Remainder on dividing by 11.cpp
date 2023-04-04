int xmod11(string s)
    {
       // code here
        int carry=0;
       int i=0;
       while(i<s.size()){
           int n=10*carry+s[i]-'0';
           carry=n%11;
           i++;
       }
       
       return carry;
    
    }