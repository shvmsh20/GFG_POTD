bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        int count = 0;
        if(n==0) return true;
        vector<int>arr(seats);
        
        for(int i=0;i<m;i++){
            if(i==0 && arr[i]==0 && arr[i+1] == 0){
                arr[i] = 1;
                count++;
            }else if(i==m-1 && arr[i]==0 && arr[i-1] == 0){
                arr[i] = 1;
                count++;
            }
            else if(i>0 && i<m-1 && arr[i]==0 && arr[i-1] == 0 && arr[i+1] ==0){
                arr[i]=1;
                count++;
            }
            if(count==n) return true;
        }
        return false;
    }