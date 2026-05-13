// Topic: Hashing / Palindrome Parity Logic
// Problem M: Chemistry
// Logic: A string can be rearranged into a palindrome if it has at most one 
// character with an odd frequency. We count characters with odd frequencies (cnt). 
// Since each removal (k) can reduce the number of odd frequencies by at most 1, 
// the condition to form a palindrome is: (cnt - k) <= 1.
// Complexity: O(T * N) Time, O(26) Space.

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        int odd_count = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 != 0) {
                odd_count++;
            }
        }

        // Mathematical condition: After removing k characters, we check if 
        // the remaining odd frequencies can be reduced to 1 or 0.
        if(odd_count - k <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}