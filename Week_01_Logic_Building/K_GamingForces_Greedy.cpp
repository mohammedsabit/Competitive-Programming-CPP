// Topic: Greedy Algorithms / Frequency Counting
// Problem K: GamingForces
// Logic: Monocarp can kill two 1-HP monsters with one spell. 
// To minimize spells, we count all monsters with health = 1 and pair them up.
// Every monster with health > 1 is killed using a single-target spell.
// Total Spells = (Count of 1-HP monsters / 2, rounded up) + (Count of monsters with HP > 1).
// Complexity: O(N) Time, O(1) Space (since health <= 100).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        // Frequency array for monster health (1 to 100)
        int health_freq[101] = {0};

        for(int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            health_freq[h]++;
        }

        int total_operations = 0;

        // Monsters with HP > 1: Each requires 1 unique spell
        for(int h = 2; h <= 100; h++)
        {
            total_operations += health_freq[h];
        }

        // Monsters with HP = 1: Can be paired (2 monsters per spell)
        int ones = health_freq[1];
        if(ones > 0)
        {
            // ceil(ones / 2.0)
            total_operations += (ones + 1) / 2;
        }

        cout << total_operations << endl;
    }
    return 0;
}