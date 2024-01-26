double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double, int>> ratio(n);
        for(int i=0; i<n; i++){
            double x = double(arr[i].value)/double(arr[i].weight);
            ratio[i] = {x, i};
        }
        sort(ratio.begin(), ratio.end());
        double res = 0;
        for(int i=n-1; i>=0 && W>0; i--){
            if(W>=arr[ratio[i].second].weight){
                res += double(arr[ratio[i].second].value);
                W-= arr[ratio[i].second].weight;
            }else{
                res+= double(W)*ratio[i].first;
                W = 0;
            }
            
        }
        return res;
    }