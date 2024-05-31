int swapNibbles(int n) {
        // code here
         bitset<8>b(n);
        for(int i=0;i<4;i++){
            b[i] = b[i] xor b[i+4];
            b[i+4]= b[i+4] xor b[i];
            b[i] = b[i] xor b[i+4];
        }
        return b.to_ulong();
    }