int isPossible(int N , int coins[]) 
    {
         int totalSum = 0;

        for (int i = 0; i < N; i++) {
            totalSum += coins[i];
        }

        if (totalSum == 2024 || totalSum % 20 == 0 || totalSum % 24 == 0) {
            return 1;
        }

        bitset<2025> possibleSums;
        possibleSums[0] = 1;

        for (int i = 0; i < N; i++) {
            for (int j = 2024; j >= coins[i]; j--) {
                if (possibleSums[j - coins[i]]) {
                    possibleSums[j] = 1;

                    if (j == 2024 || j % 20 == 0 || j % 24 == 0) {
                        return 1;
                    }
                }
            }
        }

        return 0;
    }