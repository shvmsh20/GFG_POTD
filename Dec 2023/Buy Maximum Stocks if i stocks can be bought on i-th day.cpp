static bool cmp(pair<int, int> &p1, pair<int, int> &p2){
        if(p1.first!=p2.first){
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
    }
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>> stocks(n);
        for(int i=0; i<n; i++){
            stocks[i] = {price[i], i+1};
        }
        sort(stocks.begin(), stocks.end(), cmp);
        int res = 0;
        for(int i=0; i<n; i++){
            int currDay = stocks[i].second;
            int cost = stocks[i].first;
            int stocksBought = min(currDay, k/cost);
            res += stocksBought;
            k -= (stocksBought*cost);
            if(k==0){
                break;
            }
        }
        return res;
    }