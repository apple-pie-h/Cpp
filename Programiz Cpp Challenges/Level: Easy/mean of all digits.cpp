double calculateMean(int num) {
    int i=0,s=0,c=0;
    while(num!=0)
    {
        i=num%10;
        s+=i;
        num/=10;
        c++;
    }
    return s/c;
}
