int maxPeopleDefeated(int p) {
        // Code Here
        int res = 0, currIndex=1;
        while(p>0){
            if(p>=pow(currIndex, 2)){
                p-=pow(currIndex, 2);
                res++;
                currIndex++;
            }else{
                break;
            }
        }
        return res;
    }