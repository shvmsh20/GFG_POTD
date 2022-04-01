
long long int calculate(int a[], int n)
{
    // Complete the function
sort(a, a+n);
int count=0, ans=0;
for(int i=1; i<n; i++){
    if(a[i-1]==a[i]){
        count++;
    }else{
        ans+= (count*(count+1)/2);
        count=0;
    }
}
ans+= (count* (count+1)/2);
return ans;

}
