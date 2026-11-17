bool findPattern(string& s) {
        // code here
        int n = s.size(), i=0, x=0, y=0;
        while(i<n){
            // count x
            while(i<n && s[i]=='x'){
                x++;
                i++;
            }
            // count y
            while(i<n && s[i]=='y'){
                y++;
                i++;
            }
            if(x!=y){
                return false;
            }
            x=0;
            y=0;
        }
        return true;
    }