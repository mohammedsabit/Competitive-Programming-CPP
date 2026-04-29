// Topic: Greedy Algorithms / Conditional Logic
// Problem B: Buttons
// Logic: To maximize the coins collected, we make a greedy choice. 
// We either press the button with the highest value twice (max + max - 1),
// or press both buttons once (a + b) if their values are equal or extremely close.
// Complexity: O(1) Time, O(1) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // If the buttons have the same value or a difference of exactly 1 (a > b)
    if(a - b == 0 || a - b == 1)
    {
        cout << a + b << endl;
    }
    else
    {
        // Greedy choice: press the maximum valued button twice
        int mx = max(a, b);
        cout << mx + mx - 1 << endl;
    }
    
    return 0;
}