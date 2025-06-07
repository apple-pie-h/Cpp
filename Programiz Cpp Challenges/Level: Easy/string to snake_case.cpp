string convertToSnakeCase(string str) {
  for (char &c : str) {
        c = tolower(c);
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') { 
            str[i] = '_';
        }
    }

    return str;
}
