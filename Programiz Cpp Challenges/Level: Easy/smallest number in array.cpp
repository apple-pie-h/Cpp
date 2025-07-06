int findSmallestNumber(int arr[], int n) {
    int a=arr[0];
    for (int i=1; i<n; i++)
    {
if (arr[i]<a)
{
    a=arr[i];
}
    }
    return a;
}
