int findNum(int n)
        {
        //complete the function here
        int low = 0, high = 5*n;
            while(low <= high){
                int mid = low + (high - low)/2;
                int cnt = 0;
                int temp = mid;
                while(mid){
                    cnt += mid/5;
                    mid /= 5;
                }
                if(cnt >= n) high = temp - 1;
                else low = temp + 1;
            }
            return low;
        }