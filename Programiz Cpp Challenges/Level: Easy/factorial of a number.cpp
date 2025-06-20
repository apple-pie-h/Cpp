int calculateFactorial(int num) {
    int s=1;
    for (int i=1; i<=num; i++)
    {
        s=s*i;
    }
    return s;
}
