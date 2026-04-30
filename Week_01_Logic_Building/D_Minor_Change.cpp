// Topic: String Manipulation / Positional Comparison
// Problem D: Minor Change
// Logic: Calculate the Hamming Distance (number of mismatches) between two strings S and T.
// Since we only need to replace characters at existing positions, we iterate through
// both strings once and increment a counter whenever S[i] != T[i].
// Complexity: O(N) Time, O(1) Space (excluding input storage).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int mismatch_count = 0;
    int string_size = s1.size();

    // Linear traversal to count positional differences
    for(int i = 0; i < string_size; i++)
    {
        if(s1[i] != s2[i])
            mismatch_count++;
    }

    cout << mismatch_count << endl;
    
    return 0;
}