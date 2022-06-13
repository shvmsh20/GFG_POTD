int isRepeat(string s)
	{
	    // Your code goes here
	    int n=s.size();
       for(int i=0;i<n;i++)
       {
           string subString=s.substr(0,i);
           int subSize=subString.size();
           if(n!=0 && subSize!=0 && n%subSize==0)
           {
               int count=0;
               int checkSize=n/subSize;
               string test="";
               while(count<checkSize)
               {
                   test+=subString;
                   if(test==s)
                   {
                       return 1;
                   }
                   count++;
               }
           }
       }
       return 0;
	}