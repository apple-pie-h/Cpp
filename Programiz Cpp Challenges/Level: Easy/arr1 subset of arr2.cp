string isSubset(int arr1[], int size1, int arr2[], int size2) {
    //{4,5,8,9,6,4},{4,5,8,9,6,4,84,55}
    int k = 0;
    for(int i = 0 ; i < size1 ; i++)
    {
        for(int j = 0 ; j<size2 ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                k++;
            }
            
        }
    }
    if(k==size1)
    {
        return "Yes";
    }
    else 
        return "No";
}
