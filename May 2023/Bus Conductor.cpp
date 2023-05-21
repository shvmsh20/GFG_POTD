nt findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        int count =0;
        for(int i=0;i<n;i++){
            if(passengers[i]-chairs[i]>0){
            count+=(passengers[i]-chairs[i]);
            }
            else{
                count+=-(passengers[i]-chairs[i]);
            }
            
        }
        return count;
    }