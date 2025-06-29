vector<string> filterStrings(string arr[], int size) {
    vector<string> result;
      for (int i = 0; i < size; i++) {
        if (arr[i].find('a') == string::npos && arr[i].find('A') == string::npos) {
            result.push_back(arr[i]);
        }
    }

    return result;
}
