int findExtra(int n, int arr1[], int arr2[])
{
    // add code here.
    for (int i = 0; i < n; i++)
    {

        if (arr1[i] != arr2[i])
        {

            return i;
        }
    }
}