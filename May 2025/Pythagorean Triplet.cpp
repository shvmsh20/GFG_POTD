bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        int mx = arr[0];
        for(int i=1; i<n; i++){
            mx = max(mx, arr[i]);
        }
        vector<int> freq((mx+1), 0);
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
            // cout << arr[i] << endl;
        }
        // cout << freq[30] << endl;
        for(int i=1; i<=mx; i++){
            for(int j=i+1; j<=mx; j++){
                if(freq[i]>0 && freq[j]>0){
                    int a = i*i, b = j*j;
                    int c = a+b;
                    int d = sqrt(c);
                    if((d*d==c )&& d<=mx && freq[d]>0){
                        // cout<< i << " " << j << " " << d << endl;
                        return true;
                    }
                }
            }
        }
        return false;
    }