int minLaptops(int N, int start[], int end[]) {
        // Code here
        int res = 0, curr = 0;
        int i=0, j=0;
        sort(start, start+N);
        sort(end, end+N);
        while(i<N && j<N){
            if(start[i]<end[j]){
                curr++;
                i++;
            }else{
                curr--;
                j++;
            }
            res = max(res, curr);
        }
        return res;
    }    