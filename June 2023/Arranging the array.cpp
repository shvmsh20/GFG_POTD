void reverse(int i, int j, int arr[])
    {
        if (i < j)
            std::reverse(arr + i, arr + j);
    }
    void merge(int l, int mid, int r, int arr[])
    {
        int i = l, j = mid + 1;
        while (i <= mid and arr[i] < 0)
            i++;

        while (j <= r and arr[j] < 0)
            j++;

        reverse(i, mid + 1, arr);
        reverse(mid + 1, j, arr);
        reverse(i, j, arr);
    }
    void mergeSort(int l, int r, int arr[])
    {
        if (l < r)
        {
            int mid = (l + r) / 2;
            mergeSort(l, mid, arr);
            mergeSort(mid + 1, r, arr);
            merge(l, mid, r, arr);
        }
    }
    void Rearrange(int arr[], int n)
    {
        mergeSort(0, n - 1, arr);
    }