int countDigits(int num) {
    int b=0;
    while (num!=0)
    {
        b+=1;
        num=num/10;
    }
    return b;
}
