int countDigits(int num) {
    int s=0;
    while (num!=0)
    {
        num=num/10;
        s++;
    }
    return s;
}
