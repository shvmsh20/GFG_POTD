int subarrayRanges(vector<int>& arr) {
        // code here
        int n = arr.size();

        vector<int> pse(n), nse(n), pge(n), nge(n);
        stack<int> s;

        // Previous Smaller
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] > arr[i])
                s.pop();
            pse[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        // Next Smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            nse[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        // Previous Greater
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] < arr[i])
                s.pop();
            pge[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        // Next Greater
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] <= arr[i])
                s.pop();
            nge[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        long long minSum = 0, maxSum = 0;

        for (int i = 0; i < n; i++) {
            long long minCount = (long long)(i - pse[i]) * (nse[i] - i);
            long long maxCount = (long long)(i - pge[i]) * (nge[i] - i);

            minSum += minCount * arr[i];
            maxSum += maxCount * arr[i];
        }

        // safe cast
        return (int)(maxSum - minSum);
    }