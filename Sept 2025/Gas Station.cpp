int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int currGas = 0, totalGas = 0, totalCost = 0;;
        int n = gas.size();
        int res = 0;
        for(int i=0; i<n; i++){
            currGas+= (gas[i]-cost[i]);
            totalGas+= gas[i];
            totalCost+= cost[i];
            if(currGas<0){
                currGas = 0;
                res = (i+1)%n;
            }
        }
        if(totalGas>=totalCost) return res;
        return -1;
    }