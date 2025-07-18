int lcmTriplets(int N) {
        // code here
        if (N <= 2)
            return N;
        if (N % 2 == 0) {
            if (N % 3 == 0)
                return (N - 1) * (N - 2) * (N - 3);
            else
                return (N - 1) * (N - 3) * N;
        }
        else
            return (N - 2) * (N - 1) * N;
    }