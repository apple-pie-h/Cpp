int countLeapYears(int year1, int year2) {
    int a=0;
    for (int i=year1; i<=year2; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            a++;
        }
    }
    return a;
}
