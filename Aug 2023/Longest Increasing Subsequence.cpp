int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>ans;
             ans.push_back(a[0]);
             int length=1;
             for(int i=1;i<n;i++){
                 if(a[i]>ans.back()){
                     ans.push_back(a[i]);
                     length++;
                 }
                 else{
                     int index = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                     ans[index]=a[i];
                 }
             }
             return length;
    }