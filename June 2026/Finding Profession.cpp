string profession(int level, int pos) {
        // code here
         bool job = 1; // 1 means engineer
        level = ceil(log2(pos)); // Take upper value of decimal
        int var = pow(2,level); // help us to move right or left
        
        while(var>1){
           
            var/=2;
            
            if(pos>var){
                pos-=var;
                job = !job;
            }
        }
        
        if(job)return "Engineer";
        else return "Doctor";
    }