vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    vector<int> ans;
    sort(a, a+n);
    int i=0, j=n-1;
    if(n!=1 && a[j]==a[i]){
        return {-1};
    }
    while(i<=j){
        if(i==j){
            ans.push_back(a[i]);
            break;
        }else{
            ans.push_back(a[j]);
            ans.push_back(a[i]);
            j--;
            i++;
        }
    }
    return ans;
}