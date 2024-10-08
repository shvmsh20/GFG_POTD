int pairsum(vector<int> &arr) {
        // code here
        int mx = INT_MIN, secondMx = INT_MIN;
        for(int x: arr){
            if(x>mx){
                if(mx>secondMx){
                    secondMx = mx;
                }
                mx = x;
            }else if(x>secondMx){
                secondMx = x;
            }
        }
        // cout << mx << " " << secondMx << endl;
        return mx+secondMx;
    }