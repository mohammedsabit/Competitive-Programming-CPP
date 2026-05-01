// Topic: Basic Simulation / Number Search
// Problem F: Find Multiple
// Logic: Search for the first multiple of C that falls within the range [A, B].
// We iteratively check multiples (C*1, C*2...) until we either find one 
// in the range or exceed the upper bound B.
// Complexity: O(B/C) Time, O(1) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int multiple_factor = 1;
    bool found = false;
    int result_value;

    // Simulate multiples of C
    while(true)
    {
        int current_multiple = c * multiple_factor;
        
        // Condition: multiple is within range [A, B]
        if(a <= current_multiple && current_multiple <= b)
        {
            found = true;
            result_value = current_multiple;
            break;
        }
        
        // Termination: multiple has exceeded the upper bound
        if(current_multiple > b)
        {
            break;
        }

        multiple_factor++;
    }

    if(found)
        cout << result_value << endl;
    else
        cout << -1 << endl;
        
    return 0;
}