string replaceSmiley(const string& input) {
    string output=input;
    int pos=0;
while ((pos = output.find(":)", pos)) != std::string::npos) {
        output.replace(pos, 2, ":(");
        pos += 2; 
    }

    return output;
}

/*
string replaceSmiley(const string& input) {
    //input.replace(input.find(":)"), sizeof(":)") - 1, ":(");
    //std::regex_replace(input, std::regex(":\\)"), ":\\(");

    string output = "";
    for(char c: input)
    {
        if (c == ')')
            c = '(';
        output += c;
    }
    return output;
}
*/
