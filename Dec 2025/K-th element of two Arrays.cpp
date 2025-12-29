int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
         int sizeA = a.size()-1, sizeB = b.size()-1, i = 0, j = 0;
        while ((i <= sizeA) && (j <= sizeB)) {
            if (a[i] < b[j]) {
                k--;
                if (k == 0) {
                    return a[i];
                }
                i++;
            } else {
                k--;
                if (k == 0) {
                    return b[j];
                }
                j++;
            }
        }
        while (i <= sizeA) {
            k--;
            if (k == 0) {
                return a[i];
            }
            i++;
        }
        while (j <= sizeB) {
            k--;
            if (k == 0) {
                return b[j];
            }
            j++;
        }
        
        return -1;
    }