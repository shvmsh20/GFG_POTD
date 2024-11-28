int myAtoi(char *s) {
        // Your code here
        long long ans = 0;
        int i = 0, n = strlen(s);
        int sign = 1;

        while (i < n && (s[i]==' ' || s[i]=='0')) i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && s[i]>='0' && s[i]<='9' ) {
            ans = ans * 10 + (s[i] - '0');

            if (ans * sign > INT_MAX) return INT_MAX;
            if (ans * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return ans * sign;
    }