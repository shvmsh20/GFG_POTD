int minSteps(string str) {
    // Write your code here.
    int n=str.size()-1;
    if(n==1)
    return 1;
    
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(str[i-1]==str[0] && str[i-1]!=str[i])
                count++;
        }
        return count+1;
}