// Topic: Simulation / Reverse Logic
// Problem N: Cypher
// Logic: Given the final state and the moves performed, we simulate the 
// reverse process to find the initial state. 
// - If a 'Down' (D) move was made, we add 1 (reverse to 'Up').
// - If an 'Up' (U) move was made, we subtract 1 (reverse to 'Down').
// We handle the circular boundary (0-9) at each step.
// Complexity: O(T * N * max_moves) Time, O(N) Space.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> final_state(n);
        for (int i = 0; i < n; i++) {
            cin >> final_state[i];
        }

        for (int i = 0; i < n; i++) {
            int move_count;
            string moves;
            cin >> move_count >> moves;

            for (char move : moves) {
                if (move == 'D') {
                    // Reverse of Down is Up (+1)
                    final_state[i]++;
                    if (final_state[i] > 9) final_state[i] = 0;
                } else if (move == 'U') {
                    // Reverse of Up is Down (-1)
                    final_state[i]--;
                    if (final_state[i] < 0) final_state[i] = 9;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << final_state[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}