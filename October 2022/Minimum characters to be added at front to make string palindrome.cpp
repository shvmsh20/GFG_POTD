int minChar(string str){
        //Write your code here
        int n = str.length();
        int i=0, j=n-1;
        int ans = 0;
        while(i<j){
            if(str[i]==str[j]){
                i++;
                j--;
            }else{
                ans = n-j;
                i=0;
                while(str[i]==str[j]){
                    i++;
                    ans--;
                }
                j--;
            }
        }
        return ans;
    }