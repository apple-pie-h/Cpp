char findMostCommonChar(string str) {
  unordered_map<char, int> freq;
    char mostCommon = '\0';
    int maxCount = 0;

    for (char c : str) {
        freq[c]++;  
        if (freq[c] > maxCount) {
            maxCount = freq[c];
            mostCommon = c;
        }
    }

    return mostCommon;
}
