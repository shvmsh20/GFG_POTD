char profession(int level, int pos){
        // code here
        int c=0;
       pos--;
        while(pos)
        {
            pos &= (pos-1) ;
            c++;
        }
        return c%2 ? 'd' : 'e';
    }