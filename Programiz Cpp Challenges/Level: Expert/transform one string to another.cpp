int editDistance(std::string& str1, std::string& str2) {
     int m = str1.length();
    int n = str2.length();

    // Create a 2D DP table
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // Fill the table
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j; // Need to insert all of str2
            else if (j == 0)
                dp[i][j] = i; // Need to delete all of str1
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1]; // No operation needed
            else
                dp[i][j] = 1 + min({ dp[i - 1][j],     // Deletion
                                     dp[i][j - 1],     // Insertion
                                     dp[i - 1][j - 1]  // Substitution
                                   });
        }
    }

    return dp[m][n];
}
