vector<vector<int>> formCoils(int n) {
        
        // code here
        vector<vector<int>> mat(4 * n, vector<int>(4 * n, 0));
    int count = 1;
    for (int i = 0; i < 4 * n; i++)
    {
        for (int j = 0; j < 4 * n; j++)
        {
            mat[i][j] = count;
            count++;
        }
    }

    int p[2] = {4 * n, 4 * n - 2};
    vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int d_ind = 0;
    vector<int> v1, v2;
    int x = -1, y = 0;
    while (p[d_ind & 1])
    {
        for (int i = 0; i < p[d_ind & 1]; i++)
        {
            x += dir[d_ind][0];
            y += dir[d_ind][1];
            v1.push_back(mat[x][y]);
        }

        p[d_ind & 1] -= 2;
        d_ind = (d_ind + 1) % 4;
    }
    reverse(v1.begin(), v1.end());

    p[0] = 4 * n;
    p[1] = 4 * n - 2;
    dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    d_ind = 0;
    x = 4 * n;
    y = 4 * n - 1;
    while (p[d_ind & 1])
    {
        for (int i = 0; i < p[d_ind & 1]; i++)
        {
            x += dir[d_ind][0];
            y += dir[d_ind][1];
            v2.push_back(mat[x][y]);
        }

        p[d_ind & 1] -= 2;
        d_ind = (d_ind + 1) % 4;
    }
    reverse(v2.begin(), v2.end());
    return {v2, v1};
    }