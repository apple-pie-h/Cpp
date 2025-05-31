int sumEveryNth(int arr[], int size, int n) {
  int sum = 0;
    for (int i = n - 1; i < size; i += n) {
        sum += arr[i];  // Accumulate the sum
    }
    return sum;
}
