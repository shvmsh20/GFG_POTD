vector<long long> seg;

    long long gcd(long long a, long long b) {
        while (b) {
            long long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    void build(int idx, int low, int high, vector<int>& arr) {
        
        if (low == high) {
            seg[idx] = arr[low];
            return;
        }

        int mid = (low + high) / 2;

        build(2 * idx + 1, low, mid, arr);

        build(2 * idx + 2, mid + 1, high, arr);

        seg[idx] = lcm(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    void update(int idx, int low, int high, int pos, int val) {

        if (low == high) {
            seg[idx] = val;
            return;
        }

        int mid = (low + high) / 2;

        if (pos <= mid)
            update(2 * idx + 1, low, mid, pos, val);

        else
            update(2 * idx + 2, mid + 1, high, pos, val);

        seg[idx] = lcm(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    long long query(int idx, int low, int high, int l, int r) {

        if (high < l || low > r)
            return 1;

        if (low >= l && high <= r)
            return seg[idx];

        int mid = (low + high) / 2;

        long long left = query(2 * idx + 1, low, mid, l, r);

        long long right = query(2 * idx + 2, mid + 1, high, l, r);

        return lcm(left, right);
    }

    vector<long long> RangeLCMQuery(vector<int> &arr, vector<vector<int>> &queries) {
        
        int n = arr.size();

        seg.resize(4 * n);

        build(0, 0, n - 1, arr);

        vector<long long> ans;

        for (auto &q : queries) {

            if (q[0] == 1) {
                update(0, 0, n - 1, q[1], q[2]);
            }

            else {
                ans.push_back(query(0, 0, n - 1, q[1], q[2]));
            }
        }

        return ans;
    }