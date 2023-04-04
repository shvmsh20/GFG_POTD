vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        long long S = __gcd(L, B); // inbuilt function in C++
        vector<long long> res = {(L*B)/(S*S), S};
        return res;
    }