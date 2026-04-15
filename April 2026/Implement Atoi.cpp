int myAtoi(string &s) {
        // code here
         long ans=0;
       char sign=' ';

        for(char a : s){
            
            
            if(int(a)<=57 && int(a) >=48){
                ans*=10;
                ans+=(a-'0');
            }
            else{
                if(ans!=0 || sign!=' ') break;
                if(ans==0 && sign==' '){
                    if(a=='-' || a=='+') sign=a;
                    else if(a==' ') ;
                    else break;
                }
            }
            // cout<< ans<<" ";
            if(ans>INT_MAX && sign=='-' ) return INT_MIN;
            if(ans>INT_MAX) return INT_MAX;
        }
        
      
        if(sign == '-'){
            // cout<< ans*-1;
          return (int)ans*-1;  
        } 
        else return ans;
    }