    // code here
        int n = s.size();
               int k = n / 2;
               for (int i = 0; i < k; i++) {
                   if ((s[i] != '?') && (s[n - 1 - i] != '?')) {
                       if (s[i] != s[n - 1 - i])
                           return -1;
                   } else if (s[i] != '?')
                       s[n - 1 - i] = s[i];
                   else if (s[n - 1 - i] != '?')
                       s[i] = s[n - 1 - i];
               }

               int res = 0;
               for (int i = 1; i < k; i++) {
                   if (s[i] != '?' && s[i - 1] != '?')
                       res += 2 * abs(s[i] - s[i - 1]);
                   else if (s[i] == '?' && s[i - 1] != '?')
                       s[i] = s[i - 1];
               }

               if (n % 2 && s[k] != '?' && s[k - 1] != '?')
                   res += 2 * abs(s[k] - s[k - 1]);

               return res;
    }