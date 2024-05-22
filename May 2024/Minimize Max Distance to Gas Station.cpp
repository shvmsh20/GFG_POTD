int check(vector<int> &stations, double x, int n){
        int k = 0;
        
        for(int i =0;i<n-1;i++){
            int y = floor((stations[i+1]-stations[i])/x);
            if(2*y == (double)(stations[i+1]-stations[i])){
            --y;
            }
            k+=y;
        }
        return k;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        double l = 0.00;
        double r = 0.00;
        int n = stations.size();
        for(int i=0; i<n-1;i++){
            r= max(r,(stations[i+1]-stations[i])*1.00);

        }
        double ans = r;
        while((r-l)>1e-7){
            double mid = l + (r-l)/2.00;
            int l1 = check(stations,mid,n);
 
            if(l1<=k){
               ans = mid;
               r=mid;
            }else l = mid;
        }
        return ans;
    }