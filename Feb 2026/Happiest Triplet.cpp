 vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        int i = 0, j = 0, k = 0;
        int mindiff = INT_MAX;
        int minsum = INT_MAX;

        vector<int> ans(3);

        while (i < a.size() && j < b.size() && k < c.size()) {

            int mx = max({a[i], b[j], c[k]});
            int mn = min({a[i], b[j], c[k]});
            int diff = mx - mn;
            int sum = a[i] + b[j] + c[k];

            if (diff < mindiff || (diff == mindiff && sum < minsum)) {
                mindiff = diff;
                minsum = sum;
                ans = {mx, a[i] + b[j] + c[k] - mx - mn, mn};
            }

            // move pointer of minimum element
            if (mn == a[i]) i++;
            else if (mn == b[j]) j++;
            else k++;
        }

        // ensure decreasing order
        sort(ans.rbegin(), ans.rend());
        return ans;
    }