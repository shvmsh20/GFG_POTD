int findMin(int n, char a[]){
        // code here
        int countR=0, countB=0, countG=0;
        for(int i=0; i<n; i++){
            if(a[i]=='R'){
                countR++;
            }else if(a[i]=='B'){
                countB++;
            }else{
                countG++;
            }
        }
        if(countR==0 && countG==0){
            return countB;
        }
        if(countG==0 && countB==0){
            countR;
        }
        if(countR==0 && countB==0){
            return countG;
        }
        if(countR%2==0 && countG%2==0 && countB%2==0){
            return 2;
        }
        if(countR%2!=0 && countG%2!=0 && countB%2!=0){
            return 2;
        }
        return 1;
    }