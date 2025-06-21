int findSecondLargest(int arr[], int arrSize) {
    int largest=arr[0], second_largest;
for (int i = 0; i < arrSize; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
 
    }
    return second_largest;
}
