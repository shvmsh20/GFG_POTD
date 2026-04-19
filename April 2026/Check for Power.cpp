bool isPower(int x, int y) {
        // code here
        if(y==1)return true;
        if(x==0)return false;
        if(x==1)return y==1;
        while(y%x==0){
            
                y=y/x;
                
        }
        return y==1;
    }