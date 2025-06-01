vector<int> findRowCol(int num, int n){
        vector<int> res(2);
        res[0] = num/n;
        res[1] = num%n;
        return res;
    }
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n = mat1.size();
        int st = 0, end = n*n-1;
        int res = 0;
        while(st<n*n && end>=0){
            vector<int> v1 = findRowCol(st, n);
            int r1 = v1[0], c1 = v1[1];
            vector<int> v2 = findRowCol(end, n);
            int r2 = v2[0], c2 = v2[1];
            // cout << r1 << " " << c1 << endl;
            // cout << r2 << " " << c2 << endl;
            int n1 = mat1[r1][c1], n2 = mat2[r2][c2];
            if(n1+n2<x){
                st++;
            }else if(n1+n2>x){
                end--;
            }else{
                int sol1 = n1, sol2 = n2, c1 = 1, c2 = 1;
                st++;
                while(st<n*n){
                    vector<int> v = findRowCol(st, n);
                    int r = v[0], c = v[1];
                    if(mat1[r][c]==sol1){
                        c1++;
                        st++;
                    }else{
                        break;
                    }
                }
                end--;
                while(end>=0){
                    vector<int> v = findRowCol(end, n);
                    int r = v[0], c = v[1];
                    if(mat2[r][c]==sol2){
                        c2++;
                        end--;
                    }else{
                        break;
                    }
                }
                // cout << c1 << " " << c2 << endl;
                res+=c1*c2;
            }
        }
        return res;
    }