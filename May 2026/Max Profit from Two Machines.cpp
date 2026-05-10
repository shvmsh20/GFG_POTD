int maxProfit(int x, int y, vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        long long base = 0;
        vector<int> diff;
        diff.reserve(n);

        for (int i = 0; i < n; i++) {
            base += b[i];
            diff.push_back(a[i] - b[i]);
        }

        sort(diff.begin(), diff.end(), greater<int>());

        int low = max(0, n - y);
        int high = min(x, n);

        long long running = 0;
        long long bestGain = (low == 0 ? 0 : LLONG_MIN);

        for (int i = 0; i < n; i++) {
            running += diff[i];
            int taken = i + 1;

            if (taken >= low && taken <= high) {
                bestGain = max(bestGain, running);
            }

            if (taken > high) break;
        }

        return (int)(base + bestGain);
    }