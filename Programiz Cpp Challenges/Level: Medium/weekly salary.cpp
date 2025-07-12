double calculateWeeklySalary(double rate, int hours) {
    if (hours>40)
    {
        return 40*rate+(hours-40)*1.5*rate;
    }
    else 
    return hours*rate;
}
