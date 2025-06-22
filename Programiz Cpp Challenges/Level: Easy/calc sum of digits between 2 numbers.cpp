int calculateSum(int num1, int num2) {
    int s=0, r,a;
    for (int i=num1; i<=num2; i++)
    {a=i;
        while (a!=0)
        {
            r=a%10;
            s+=r;
            a/=10;
        }
    }
    return s;
}
