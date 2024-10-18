#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001]; // Declare dp globally for memoization

int solve(int h, int a, int i) {
    if (h <= 0 || a <= 0) {
        return 0;
    }
    
    if (dp[h][a] != -1) {
        return dp[h][a];
    }
    
    int option1 = 0, option2 = 0, option3 = 0;
    
    if (i != 1) {  // Choosing option 1 (Fire)
        option1 = 1 + solve(h + 3, a + 2, 1);
    }
    
    if (i != 2) {  // Choosing option 2 (Water)
        option2 = 1 + solve(h - 5, a - 10, 2);
    }
    
    if (i != 3) {  // Choosing option 3 (Air)
        option3 = 1 + solve(h - 20, a + 5, 3);
    }

    // Store the result in dp table and return the maximum of the three options
    return dp[h][a] = max({option1, option2, option3});
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int health, armor;
        cin >> health >> armor;

        // Reset dp array for each test case
        memset(dp, -1, sizeof(dp));

        // Start with three possible states and return the maximum of them
        cout << max({solve(health + 3, armor + 2, 1), 
                     solve(health - 5, armor - 10, 2), 
                     solve(health - 20, armor + 5, 3)}) << endl;
    }
}
