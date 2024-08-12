int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size(), m = arr2.size();
        int m1 = -1, m2 = -1;
        if((n+m)%2==0){
            m1 = (n+m)/2-1;
            m2 = m1+1;
        }else{
            m1 = (n+m)/2;
        }
        int i = 0, j = 0, index = 0;
        int sum = 0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(index==m1 || index==m2){
                    sum+= arr1[i];
                }
                i++;
            }else{
                if(index==m1 || index==m2){
                    sum+= arr2[j];
                }
                j++;
            }
            index++;
        }
        while(i<n){
            if(index==m1 || index==m2){
                sum+= arr1[i];
            }
            index++;
            i++;
        }
        while(j<m){
            if(index==m1 || index==m2){
                sum+= arr2[j];
            }
            index++;
            j++;
        }
        return sum;
    }
    