static bool cmp(Job &obj1, Job &obj2){
       
            return obj1.profit>obj2.profit;
       
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, cmp);
        vector<int> slots(n);
        int cnt = 0, profit = 0;
        for(int i=0; i<n; i++){
            Job job = arr[i];
            for(int j=job.dead-1; j>=0; j--){
                if(slots[j]==0){
                    slots[j] = 1;
                    cnt++;
                    profit+= job.profit;
                    break;
                }
            }
        }
        return {cnt, profit};
    } 