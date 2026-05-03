// Topic: Greedy Algorithms / Time Series Logic
// Problem I: Increasing Array
// Logic: To make the array non-decreasing with minimum moves, we iterate through 
// the array and ensure each element is at least as large as the previous one. 
// If a[i] < a[i-1], we add the difference to our total 'moves' and update a[i].
// Complexity: O(N) Time, O(N) Space (using array storage).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O for competitive programming
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Using long long to prevent integer overflow for the sum of moves
    vector<long long int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int total_moves = 0;

    for(int i = 1; i < n; i++)
    {
        // If current element is smaller than the previous one
        if(a[i] < a[i-1])
        {
            long long int diff = a[i-1] - a[i];
            total_moves += diff;
            // Greedily update current element to match the previous one
            a[i] = a[i-1];
        }
    }

    cout << total_moves << endl;
    
    return 0;
}