bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        multiset<int> s(hand.begin(),hand.end());
        while(s.size()>0)
        {
            int x = *s.begin();
            for(int i=x;i<x+groupSize;i++)
            {
                if(s.find(i)==s.end())
                    return false;
                s.erase(s.find(i));
            }
        }
        return true;
    }
};