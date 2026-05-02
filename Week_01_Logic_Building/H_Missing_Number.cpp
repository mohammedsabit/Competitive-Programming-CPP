// Topic: Hashing / Data Marking
// Problem H: Missing Number
// Logic: Given N-1 distinct numbers from 1 to N, identify the missing one.
// We use a boolean visited array (size N+1) to mark the presence of each 
// number. A final linear scan identifies the unmarked index.
// Complexity: O(N) Time, O(N) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Boolean array to track the presence of numbers 1 to N
    // Using a vector or a static array to avoid stack overflow for large N
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));

    // Mark the numbers provided in the input (n-1 numbers)
    for(int i = 1; i < n; i++)
    {
        int val;
        cin >> val;
        visited[val] = true;
    }

    // Identify the index that was never marked as true
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}