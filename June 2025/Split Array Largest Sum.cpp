int splitArray(vector<int>& arr, int k) {
        int left = *max_element(arr.begin(), arr.end());
        int right = accumulate(arr.begin(), arr.end(), 0);
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isFeasible(arr, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
    
    bool isFeasible(const vector<int>& arr, int k, int maxSum) {
        int sum = 0;
        int count = 1;
        for (int num : arr) {
            sum += num;
            if (sum > maxSum) {
                sum = num;
                count++;
                if (count > k) {
                    return false;
                }
            }
        }
        return true;
    }