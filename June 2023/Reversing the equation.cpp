string reverseEqn (string s)
        {
            //code here.
            string a="";
            string b="";
            int n = s.length()  ;
            
            int i=0;
            
            while(i<n){
            
                if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] =='/'){
                    b = s[i++]+a+b;
                    a="";
                }
                a+=s[i];
               
                i++;
            }
            b=a +b;
            return b;
        }