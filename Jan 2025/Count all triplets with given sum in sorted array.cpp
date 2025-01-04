int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        int cnt = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if (sum == target) {
                   
                    int l = left, r = right;
                    if (arr[left] == arr[right]) {
                        int count = right - left + 1;
                        cnt += (count * (count - 1)) / 2;
                        break;
                    }
                    
                    int leftCount = 1;
                    while (left < right && arr[left] == arr[left + 1]) {
                        left++;
                        leftCount++;
                    }
                    
                   
                    int rightCount = 1;
                    while (right > left && arr[right] == arr[right - 1]) {
                        right--;
                        rightCount++;
                    }
                    
                    cnt += leftCount * rightCount;
                    left++;
                    right--;
                    
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return cnt;
    }