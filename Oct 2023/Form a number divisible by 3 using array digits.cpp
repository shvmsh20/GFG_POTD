int isPossible(int N, int arr[]) {
        // code here
        int sum = 0;
        for(int i=0; i<N; i++){
            int x = arr[i];
            string s = to_string(x);
            for(int j=0; j<s.length(); j++){
                char y = s[j];
                sum+= y-'0';
            }
        }
        return sum%3==0;
    }