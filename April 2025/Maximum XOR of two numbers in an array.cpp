class Solution {
  public:
    int maxXor(vector<int> &arr)
    {
        int maxXor = 0, mask = 0;

        for (int i = 31; i >= 0; --i)

           {
            mask |= (1 << i);
            unordered_set<int> prefixes;
            for (int num : arr)

            {
                prefixes.insert(num & mask);
            }

            int candidate = maxXor | (1 << i);
            for (int prefix : prefixes)

           {
                if (prefixes.count(prefix ^ candidate))

                   {
                    maxXor = candidate;
                    break;
                }
           }
        }
        return maxXor;
    }
};