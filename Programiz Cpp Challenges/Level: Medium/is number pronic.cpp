string checkPronic(int num) {
    int c=0;
    for (int i=1; i<num; i++)
    {
        if (i*(i+1)==num)
        {
            c++;
        }
    }
    if (c>=1)
    {
        return "Number is pronic";
    }
    else 
    return "Number isn't pronic";
}
