string stringPartition(string S, int a, int b){
        for(int i=1; i<S.size(); i++)
            if(stoi(S.substr(0,i))%a==0 && stoi(S.substr(i))%b==0)
                    return S.insert(i," ");
        return "-1";
    }