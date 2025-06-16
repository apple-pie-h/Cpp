string repeatVowels(string str) {
    int a=str.length();
    string result;
    for (int i=0 ; i<=a-1; i++)
    {
        
        result += str[i];
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U') {
            result += str[i]; 
        }
    }
    return result;
}
