 char posInfinite(string &s, int pos) {
        // code here
        int n = s.size(), i = 1;
               long long currLen = n;
               while (currLen < pos) {
                   currLen = 2 * currLen + i;
                   i++;
               }
               i--;
               while (currLen > n) {
                   long long oldLen = (currLen - i)/2;
                   if (pos <= oldLen) {
                       currLen = oldLen;
                   } else if (pos <= oldLen + i) {
                       return '$';
                   } else {
                       pos = 2 * oldLen - pos + i + 1;
                       currLen = oldLen;
                   }
                   i--;
               }
               return s[pos - 1];
    }