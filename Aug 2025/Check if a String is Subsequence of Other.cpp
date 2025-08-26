 bool isSubSeq(string& s1, string& s2) {
        // code here
        int i=0,j=0,n1=s1.length(),n2=s2.length();
       while(i<n1 && j<n2){
          
               if(s1[i]==s2[j]){
                   i++;j++;
               }
               else{
                   j++;
               }
           
       }
       if(i==n1)return true;
       else return false;
    }