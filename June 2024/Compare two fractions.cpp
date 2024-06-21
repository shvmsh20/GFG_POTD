string compareFrac(string str) {

        // Code here
        int n = str.size();
        int i=0;
        int a = 0, b=0, c=0, d=0;
        while(i<n && str[i]!='/'){
            a = (a*10)+(str[i]-'0');
            i++;
        }
        i++;
        while(i<n && str[i]!=','){
            b = (b*10)+(str[i]-'0');
            i++;
        }
        i+=2;
        while(i<n && str[i]!='/'){
            c = (c*10)+(str[i]-'0');
            i++;
        }
        i++;
        while(i<n){
            d = (d*10)+(str[i]-'0');
            i++;
        }
        // cout << a << " " << b << endl;
        // cout << c << " " << d << endl;
        double x = a/(1.00*b);
        double y = c/(1.00*d);
        // cout << x << " " << y;
        if(x>y){
            return to_string(a)+'/'+to_string(b);
        }else if(x<y){
            return to_string(c)+'/'+to_string(d);
        }else{
            return "equal";
        }
        
    }