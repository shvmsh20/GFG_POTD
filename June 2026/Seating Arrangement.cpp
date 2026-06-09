bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        int n = seats.size();
        for (int i = 0; i < n; i++) {
            bool leftEmpty = (i == 0 || seats[i - 1] == 0);
            if(!leftEmpty&&seats[i])return false;
            if(seats[i])continue;
            bool rightEmpty = (i == n - 1 || seats[i + 1] == 0);

            if (leftEmpty && rightEmpty) {
                seats[i] = 1;
                k--;
            }
        }
        if(k<=0)return true;

        return false;
    }