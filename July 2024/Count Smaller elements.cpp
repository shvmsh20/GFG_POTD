void merge(vector<int>& arr, vector<int>& indices, vector<int>& count, int left, int mid, int right) {
        int n = right - left + 1;
        vector<int> newIndices(n);
        int i = left, j = mid + 1, k = 0, rightCounter = 0;

        while (i <= mid && j <= right) {
            if (arr[indices[i]] <= arr[indices[j]]) {
                newIndices[k] = indices[i];
                count[indices[i]] += rightCounter;
                i++;
            } else {
                newIndices[k] = indices[j];
                rightCounter++;
                j++;
            }
            k++;
        }

        while (i <= mid) {
            newIndices[k] = indices[i];
            count[indices[i]] += rightCounter;
            i++;
            k++;
        }

        while (j <= right) {
            newIndices[k] = indices[j];
            j++;
            k++;
        }

        for (int p = 0; p < n; p++) {
            indices[left + p] = newIndices[p];
        }
    }

    void mergeSort(vector<int>& arr, vector<int>& indices, vector<int>& count, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, indices, count, left, mid);
            mergeSort(arr, indices, count, mid + 1, right);
            merge(arr, indices, count, left, mid, right);
        }
    }

    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> indices(n), count(n, 0);

        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        mergeSort(arr, indices, count, 0, n - 1);

        return count;
    }