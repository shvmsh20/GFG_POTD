vector <int> rotate (int n, int d)
        {
            //code here.
            vector<int> res(2, 0);
            d %= 16;
            res[0] = ((n << d) | (n >> (16 - d))) & 0xFFFF;
            res[1] = ((n >> d) | (n << (16 - d))) & 0xFFFF;
            return res;
        }