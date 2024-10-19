string roundToNearest(string str) {
        // Complete the function
          int n = str.size();
        int carry = 0;
        if(str[n-1] <= '5'){
            str[n-1] = '0';
            return str;
        }       
        
        else{
            str[n-1] = '0';
            
            for(int i = n-2; i >= 0; i--){
                if(str[i] == '9'){
                    str[i] = '0';
                    carry = 1;
                }
                
                else{
                    str[i]++;
                    carry = 0;
                    break;
                }
            }
            
        }   
        if(carry == 1) str = '1' + str;
        
        return str;
    }