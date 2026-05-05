// Topic: Mathematical Symmetry / Constructive Algorithms
// Problem L: Twin Permutations
// Logic: We are given permutation 'a' and need 'b' such that a[i] + b[i] is non-decreasing.
// The simplest way is to make a[i] + b[i] a constant value for all i.
// Since 'a' consists of elements 1 to N, we set a[i] + b[i] = N + 1.
// Therefore, b[i] = (N + 1) - a[i]. This ensures b is also a valid permutation.
// Complexity: O(N) Time, O(N) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int max_val = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > max_val) max_val = a[i];
        }

        // Generate permutation b using the symmetry: b[i] = (max + 1) - a[i]
        // In a permutation of 1..N, max_val is always N.
        for(int i = 0; i < n; i++)
        {
            int twin_value = (max_val + 1) - a[i];
            cout << twin_value << (i == n - 1 ? "" : " ");
        }

        cout << endl;
    }
    return 0;
}