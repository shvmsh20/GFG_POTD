int shortestPath( int x, int y){ 
        // code here 
        int count=0;
        while(x!=y){
            if(x>y){
                x = x/2;
            }else{
                y = y/2;
            }
            count++;
        }
        return count;
    }