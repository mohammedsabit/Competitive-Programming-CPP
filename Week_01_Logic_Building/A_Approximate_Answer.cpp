// Topic: Mathematical Logic
// Problem A: Approximate Answer
// Logic: Calculate the absolute difference between the obtained answer (X) and correct answer (Y).
// If the difference is within the allowed tolerance (K), the answer is accepted.
// Complexity: O(1) Time, O(1) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O could be added here for CP, but standard cin/cout is fine for O(1) operations
    int x, y, k;
    cin >> x >> y >> k;

    // Check if absolute difference is within the threshold K
    if(abs(x - y) <= k)   
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
        
    return 0;
}