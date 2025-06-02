string checkPerfectNumber(int num) {
    int sum=0;
    if (num<=1)
    {
        return "Not Perfect";
    }
    for (int i=1; i<=num/2; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }

    }
    if (sum==num)
    {
        return "Perfect";
    }
    else 
    return "Not Perfect";
}
