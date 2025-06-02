int calculateSumOfMin(int arr[], int arrSize) {
    int min=arr[0];
    for (int i=0; i<arrSize; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }

    }
    return min;
}
