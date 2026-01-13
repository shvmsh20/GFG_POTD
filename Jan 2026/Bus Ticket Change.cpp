bool canServe(vector<int> &arr) {
        // code here
         int fives = 0, tens = 0;
        for(auto it : arr){
            if(it == 5){
                fives++;
                continue;
            }
            if(it == 10){
                if(!fives)return false;
                tens++;
                fives--;
                continue;
            }
            if(!tens && !fives)return false;
            if(tens && fives){
                tens--;
                fives--;
                continue;
            }
            if(fives >= 3){
                fives-=3;
                continue;
            }
            return false;
        }
        return true;
    }