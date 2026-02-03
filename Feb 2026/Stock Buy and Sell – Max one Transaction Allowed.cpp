int maxProfit(vector<int> &prices) {
        // code here
        int n = prices.size(), currMin = prices[0], maxProfit = 0;
        for(int i=1; i<n; i++){
            maxProfit = max(maxProfit, prices[i]-currMin);
            currMin = min(currMin, prices[i]);
        }
        return maxProfit;
    }