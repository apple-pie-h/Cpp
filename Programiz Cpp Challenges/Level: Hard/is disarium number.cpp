string checkDisarium(int num) {
   int sum = 0;
    string numStr = to_string(num);

    for (int i = 0; i < numStr.length(); i++) {
        int digit = numStr[i] - '0';
        sum += pow(digit, i + 1);  // position starts at 1
    }

    if (sum == num)
        return "It's a disarium";
    else
        return "It's not a disarium";
}
