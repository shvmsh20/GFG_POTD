 void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pi = partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int i=low-1;
       int pi = arr[high];
       for(int j=low;j<high;j++){
           if(arr[j]<pi){
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
    }