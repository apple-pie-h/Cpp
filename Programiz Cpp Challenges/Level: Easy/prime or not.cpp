string checkPrime(int num) {
    int i=0;
    for (int s=1; s<=num; s++)
{
    if(num%s==0)
    {
        i++;
    }
}
if (i==2)
{
    return "Prime";
}
return "Not Prime";
}
