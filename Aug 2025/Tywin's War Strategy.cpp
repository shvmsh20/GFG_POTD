int minSoldiers(vector<int>& arr, int k) {
        // code here
          int n = arr.size();
        sort(arr.begin(), arr.end());
        int added = 0, lucky = 0;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            int r = arr[i] % k;
            if (r == 0) {
                lucky++;
            } else {
                v.push_back(k - r);
            }
        }

        sort(v.begin(), v.end()); // sort soldiers needed in ascending order

        int rlucky = ((n + 1) / 2) - lucky;
        if (rlucky <= 0) return added;

        for (int i = 0; i < rlucky && i < (int)v.size(); i++) {
            added += v[i];
        }
        return added;
    }