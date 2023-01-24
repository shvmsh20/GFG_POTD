void convert(int a[], int n) {

     // code here

     int b[n];

     for(int i=0;i<n;i++)

     {

         b[i]=a[i];

     }

     unordered_map<int,int>map;

     sort(b,b+n);

     for(int i=0;i<n;i++)

     {

         map[b[i]]=i;

     }

     for(int i=0;i<n;i++)

     {

         a[i]=map[a[i]];

     }

 }