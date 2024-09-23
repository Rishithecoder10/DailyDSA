 #include<iomanip>
 using namespace std;

 class Solution{
    public:
 bool f(int i, int j, string &wild, string &pattern) {
    // Base cases
    if (i < 0 && j < 0) {
        return true;  // Both strings are exhausted
    }
    if (i < 0 && j >= 0) {
        return false;  // Wildcard is exhausted but pattern is not
    }
    if (i >= 0 && j < 0) {
        // Wildcard has remaining characters, they should all be '*'
        for (int ii = 0; ii <= i; ii++) {
            if (wild[ii] != '*') {
                return false;
            }
        }
        return true;
    }

    // If characters match or wild[i] is a '?', move both pointers
    if (wild[i] == pattern[j] || wild[i] == '?') {
        return f(i - 1, j - 1, wild, pattern);
    }

    // If wild[i] is a '*', try two possibilities:
    // 1. Use '*' to match the current character in pattern (move j)
    // 2. Skip '*' (move i)
    if (wild[i] == '*') {
        return f(i, j - 1, wild, pattern) || f(i - 1, j, wild, pattern);
    }

    // If none of the above conditions match, return false
    return false;
 }

 bool match(string wild, string pattern) {
    int n = wild.length();
    int m = pattern.length();
    return f(n - 1, m - 1, wild, pattern);
}

};