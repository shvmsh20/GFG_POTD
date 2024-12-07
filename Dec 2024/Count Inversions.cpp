int inversionCountHelper(vector<int>& arr, int p, int r) 
       {
        int count = 0;
        if (p < r) 
        {
            int mid = (p + r) / 2;
            count += inversionCountHelper(arr, p, mid);        
            count += inversionCountHelper(arr, mid + 1, r);   
            count += mergeAndCount(arr, p, mid, r);            
        }
        return count;
    }

    int mergeAndCount(vector<int>& arr, int p, int mid, int r) {
        int n1 = mid - p + 1;
        int n2 = r - mid;

        vector<int> leftarr(n1);
        vector<int> rightarr(n2);

        for (int i = 0; i < n1; i++) 
        {
            leftarr[i] = arr[p + i];
        }
        for (int i = 0; i < n2; i++) 
        {
            rightarr[i] = arr[mid + 1 + i];
        }

        int i = 0, j = 0, k = p, count = 0;
        while (i < n1 && j < n2) 
        {
            if (leftarr[i] <= rightarr[j]) 
            {
                arr[k] = leftarr[i];
                i++;
            } 
            else 
            {
                arr[k] = rightarr[j];
                count += (n1 - i);  
                j++;
            }
            k++;
        }

        while (i < n1) 
        { 
            arr[k] = leftarr[i];
            i++;
            k++;
        }

        while (j < n2) 
        { 
            arr[k] = rightarr[j];
            j++;
            k++;
        }

        return count;
    }


    int inversionCount(vector<int>& arr) 
    {
        return inversionCountHelper(arr, 0, arr.size() - 1);
    }