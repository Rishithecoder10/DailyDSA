#include<bits/stdc++.h>
 using namespace std;

 class Solution{
      int minimumDays(int S, int N, int M) {
    int days;
    if (((N * 6) < (M * 7) && S > 6) || M > N) {
        return -1;
    }
    else {
        days = (M * S) / N;
        if (((M * S) % N) != 0) {
            days++;
        }
    }
    return days;
}

 };