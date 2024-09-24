#include<bits/stdc++.h>
 using namespace std;

 class Solution{
bool areIsomorphic(string str1, string str2) {
    // Check if the lengths of the two strings are not equal
    if (str1.length() != str2.length())
        return false;

    // Create two unordered maps with key-value pairs as <char, char>
    unordered_map<char, char> un;  // Map from str1 to str2
    unordered_map<char, char> un1; // Map from str2 to str1

    for (int i = 0; i < str1.length(); i++) {
        char c1 = str1[i];
        char c2 = str2[i];

        // Check if there is already a mapping from str1 to str2
        if (un.find(c1) != un.end()) {
            if (un[c1] != c2)
                return false;
        } else {
            un[c1] = c2;
        }

        // Check if there is already a mapping from str2 to str1
        if (un1.find(c2) != un1.end()) {
            if (un1[c2] != c1)
                return false;
        } else {
            un1[c2] = c1;
        }
    }

    return true;
}
 };