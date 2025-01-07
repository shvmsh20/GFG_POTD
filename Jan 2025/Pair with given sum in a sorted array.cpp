int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int i=0, j=arr.size()-1, res=0;
        while(i<j){
            if(arr[i]+arr[j]<target){
                i++;
            }else if(arr[i]+arr[j]>target){
                j--;
            }else{
                if(arr[i]==arr[j]){
                    int cnt = j-i+1;
                    res+= (cnt*(cnt-1))/2;
                    break;
                }
                int n1 = 1, n2 = 1;
                while(arr[i]==arr[i+1]){
                    n1++;
                    i++;
                }
                while(arr[j]==arr[j-1]){
                    n2++;
                    j--;
                }
                res+= n1*n2;
                i++;
                j--;
            }
        }
        return res;
    }