bool isRotated(string str1, string str2)
    {
        if(str1.length()!=str2.length()){
            return false;
        }
        int n = str1.length();
        string s;
        s = str1.substr(n-2, 2);
        s+= str1.substr(0, n-2);
        if(s==str2){
            return true;
        }else{
            s="";
            s = str1.substr(2,n-2);
            s+= str1.substr(0, 2);
            if(s==str2){
                return true;
            }else{
                return false;
            }
        }
    }