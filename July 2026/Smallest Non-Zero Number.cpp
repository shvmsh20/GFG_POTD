int find(vector<int>& arr) {
        // code here
        int need = 0;

        for (int i = arr.size() - 1; i >= 0; i--) {
            need = (need + arr[i] + 1) / 2;
        }

        return need;
    }