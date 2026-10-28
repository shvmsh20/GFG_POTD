  char nthCharacter(int n) {
        // code here
        int digits = 1;

                while (((pow(10, digits) - pow(10, digits - 1)) * digits) < n) {
                    n -= ((pow(10, digits) - pow(10, digits - 1)) * digits);
                    digits++;
                }

                int num = (n - 1) / digits;
                int pos = n - (num * digits);
                int res = pow(10, digits - 1) + num;

                return to_string(res)[pos - 1];
    }