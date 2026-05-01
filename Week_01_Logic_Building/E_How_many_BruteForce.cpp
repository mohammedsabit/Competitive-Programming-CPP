// Topic: Brute Force / Constraint Analysis
// Problem E: How many?
// Logic: Count all non-negative integer triples (i, j, k) where the sum is <= S 
// and the product is <= T. Given S <= 100, a triple-nested loop (100^3) 
// results in 10^6 operations, which easily fits within the 2000ms time limit.
// Complexity: O(S^3) Time, O(1) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;

    int total_count = 0;

    // Exhaustive search through all possible values of i, j, k
    for(int i = 0; i <= 100; i++)
    {
        for(int j = 0; j <= 100; j++)
        {
            for(int k = 0; k <= 100; k++)
            {
                // Check both mathematical conditions
                if(i + j + k <= s && i * j * k <= t)
                {
                    total_count++;
                }
            }
        }
    }

    cout << total_count << endl;
    return 0;
}