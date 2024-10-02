int rotateDelete(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        if (n == 1) return arr[0];

        int x = (n - 1) / 4, y = (n - 1) % 4;
        if (y == 0) return arr[x + 1];
        if (y == 1) return arr[x + 1];
        if (y == 2) return arr[x + 2];
        if (y == 3) return arr[x + 1];
    }