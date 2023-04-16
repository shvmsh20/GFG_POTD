int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        sort(X.begin(), X.end(), greater<int>());
        sort(Y.begin(), Y.end(), greater<int>());
        int i=0, j=0, hz=1, vt=1, n=X.size(), m=Y.size(), res=0;
        while(i<n && j<m){
            if(X[i]>=Y[j]){
                res+= (X[i]*hz);
                i++;
                vt++;
            }else{
                res+= (Y[j]*vt);
                j++;
                hz++;
            }
        }
        while(i<n){
            res+= (X[i]*hz);
            i++;
        }
        while(j<m){
            res+= (Y[j]*vt);
            j++;
        }
        return res;
    }