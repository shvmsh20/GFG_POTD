int mn = INT_MAX;
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> st;
   for(int i=0; i<n; i++){
       if(st.empty()){
           mn = arr[i];
           st.push(arr[i]);
       }else{
           if(arr[i]>=mn){
               st.push(arr[i]);
           }else{
               int modifiedTop = 2*arr[i] - mn;
               mn = arr[i];
               st.push(modifiedTop);
           }
       }
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>st)
{
    // your code here
    while(!st.empty()){
        cout << mn << " ";
        if(st.top()<mn){
            mn = 2*mn - st.top();
            st.pop();
        }else{
            st.pop();
        }
    }
}