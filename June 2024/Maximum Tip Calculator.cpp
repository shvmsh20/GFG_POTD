long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr)
{
    // code here
    vector<pair<int, int>> temp;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(arr[i] - brr[i]);
        temp.push_back({diff, i});
    }
    sort(temp.begin(), temp.end(), greater<pair<int, int>>());
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = temp[i];
        if (arr[p.second] > brr[p.second])
        {
            if (x)
            {
                res += arr[p.second];
                x--;
            }
            else
            {
                res += brr[p.second];
                y--;
            }
        }
        else
        {
            if (y)
            {
                res += brr[p.second];
                y--;
            }
            else
            {
                res += arr[p.second];
                x--;
            }
        }
    }
    return res;
}