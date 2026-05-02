// Topic: Basic Simulation
// Problem G: Biscuit Generator
// Logic: Calculate total biscuits produced at intervals of A seconds within 
// a total time limit of T + 0.5 seconds. Since we only care about full seconds, 
// we simulate the production cycles until time exceeds T.
// Complexity: O(T/A) Time, O(1) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    // If the first production cycle exceeds the time limit
    if(t < a)
    {
        cout << 0 << endl;
    }
    else if(t == a)
    {
        cout << b << endl;
    }
    else
    {
        int multiplier = 1;
        int total_biscuits = 0;
        
        // Simulate production at every interval of A seconds
        while(true)
        {
            if(a * multiplier <= t)
            {
                total_biscuits = b * multiplier;
            }
            else
            {
                break;
            }
            multiplier++;
        }

        cout << total_biscuits << endl;
    }
    
    return 0;
}