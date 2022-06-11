double util(double l, double h, double magnets[], int n){
        while(l<h){
            double mid = (l+h)/2;
            double total_force=0.00;
            for(int i=0; i<n; i++){
                total_force+= 1/(mid-magnets[i]);
            }
            if(abs(total_force)<0.000001){
                return mid;
            }
            if(total_force<0){
                h=mid;
            }else{
                l=mid;
            }
            
        }
        return l;
    }
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here   
        for(int i=0; i<n-1; i++){
            getAnswer[i] = util(magnets[i], magnets[i+1], magnets, n);
        }
        
    }