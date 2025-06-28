string replaceSmiley(const string& input) {
    string output=input;
    int pos=0;
while ((pos = output.find(":)", pos)) != std::string::npos) {
        output.replace(pos, 2, ":(");
        pos += 2; 
    }

    return output;
}
