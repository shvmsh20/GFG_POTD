void heapify(int arr[], int n, int i)
    {
      int large=i;
      int left=2*i+1;
      int right =2*i+2;
       if ( left<n && arr[large]<arr[left]) large=left;
       if( right <n && arr[large]<arr[right]) large=right;
       if(large!=i){
           swap( arr[large],arr[i]);
           heapify( arr,n,large);
       }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)
    {
    for( int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap ( arr,n);
        for( int i=n-1;i>=0;i--){
            swap( arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }