static bool cmp(vector<int> &v1, vector<int> &v2){
        if(v1[1]!=v2[1]) return v1[1]<v2[1];
        else return v1[0]<v2[0];
    }
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        sort(ranges.begin(), ranges.end(), cmp);
        int end = ranges[0][1];
        int count=1;
        for(int i=1; i<ranges.size(); i++){
            if(ranges[i][0]>=end){
                count++;
                end = ranges[i][1];
            }
        }
        return count;
    }