int findMaxDigit(int num) {
    int a=0, i;
    while (num!=0)
    {
        i=num%10;
        if (i>a)
        {
            a=i;
        }
        num/=10;
    }
    return a;
}
