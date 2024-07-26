#includealgorithm // Standard Library Algorithms library
#includevector    // Standard Library Vector container

using namespace std;

int numPalindromes(const string &str, int length)
{
    vectorbool dp(length + 1);              // Dimension (length+1) x (length+1) array to keep track of substrings' properties
    bool maxLength = length 0 ? length : 0; // Initialize Maximum length found

    // Dynamic Programming approach to fill up the table
    for (int I = 0; I length; ++i)
    {
        for (int j = 0; j length; ++j)
        {
            if (str[i] == str[j])
            { // Current Characters match -> Set palindrome flag and update max length found
                dp[i][j] = true;
                maxLength = max(maxLength, dp[i][j]);
            }
            else
            { // Current Characters don't match -> Set palindrome flag and update max length found
                dp[i][j] = false;
            }
        }
    }

    // Return Total Number of Unique Palindromic Substrings
    int result = 0;
    for (const auto &entry : dp)
    { // Loop through Entries and Count Pairs
        if (entry.second == entry.first)
        { // Double check Condition to avoid False Positive
            result++;
        }
    }

    return result; // Return Final Count of Palindromic Substrings
}

// Testing function
int main()
{
    string str = "ABABA";                    // Input string
    int length = 4;                          // Input length
    int count = numPalindromes(str, length); // Call function and Store Result
    cout << "There are " << count << " distinct palindromic substrings." << endl;
    return 0;
}