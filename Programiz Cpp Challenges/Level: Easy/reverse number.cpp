int reverseNumber(int num) {
    int s=0, i=0;
while (num!=0)
{
    i=num%10;
    s=s*10+i;
    num/=10;
}
return s;
}
