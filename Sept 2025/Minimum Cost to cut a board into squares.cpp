int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
         int hor = 1;
        int ver = 1;
        int cost =0;
        n--;m--;
        vector<pair<int,int>> xy;
        for(int i =0;i< n;i++){
            xy.push_back({y[i],0});
        }for(int i =0;i< m;i++){
            xy.push_back({x[i],1});
        }
        sort(xy.rbegin(),xy.rend());
        for(int i =0;i< xy.size();i++){
            if(xy[i].second == 1){
                cost+=ver*xy[i].first;
                hor++;
            }else{
                cost+=hor*xy[i].first;
                ver++;
            }
        }
        return cost;
    }