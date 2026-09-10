int gcdCal(int a,int b )
       {

           while(b!=0)
           {
               int temp = b ;
               b=a%b;
               a=temp;

           }
           return a ;
       }
       int pairCount(int x, int y) {
           // code here

           if(x>y || y%x!=0)
           {
               return 0;
           }
           int mul = x*y;
           int ans =0;
           int sqr= sqrt(x*y);
           for(int a=x;a<= sqr+1 ;a++)
           {

               if(mul%a ==0)
               {
                   int b = mul/a ;

                   int gcd= gcdCal(a,b);
                   int lcm = (mul)/gcd;

                   if(gcd==x && lcm==y)
                   {

                   if(a!=b)
                   {
                       ans=ans+2 ;
                   }else {
                       ans++;
                   }


                   }

               }
           }

           return ans ;
       }