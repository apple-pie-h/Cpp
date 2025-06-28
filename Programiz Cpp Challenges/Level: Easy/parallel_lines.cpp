string checkParallel(int line1[], int line2[]) {
float s1,s2;
s1=float( (line1[3]-line1[1])/(line1[2]-line1[0]));
s2=float((line2[3]-line2[1])/(line2[2]-line2[0]));
if (s1==s2)
{
    return "Parallel";
}
else 
return "Not Parallel";
}
