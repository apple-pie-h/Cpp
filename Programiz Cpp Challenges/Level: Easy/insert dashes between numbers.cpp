string dashingNumbers(int num) {
    string number;
    number = to_string(num);
    int i;
    string result;

    for (i = 0; i < number.length(); ++i) {
        result += number[i];
        if (i < number.length() - 1) {
            result += '-';
        }
    }

    return result;
}
