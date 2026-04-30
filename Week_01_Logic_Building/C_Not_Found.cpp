// Topic: String Processing / Frequency Mapping
// Problem C: Not Found
// Logic: Identify the lexicographically smallest lowercase English letter missing from string S.
// We use a boolean visited array of size 26 to track which characters are present.
// Then, we perform a linear scan from 'a' to 'z' to find the first unvisited index.
// Complexity: O(N log N) Time (due to sort), O(26) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Sorting the string (O(N log N))
    sort(s.begin(), s.end());

    // Visited array to track presence of 'a' through 'z'
    bool visited[26];
    for(int i = 0; i < 26; i++)
    {
        visited[i] = false;
    }

    // Mark characters present in the string
    for(int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        if(!visited[index])
        {
            visited[index] = true;
        }
    }

    bool missing_found = false;
    int missing_index;

    // Find the first character (lexicographically smallest) not present
    for(int i = 0; i < 26; i++)
    {
        if(!visited[i])
        {
            missing_found = true;
            missing_index = i;
            break;
        }
    }

    if(missing_found)
        cout << char(missing_index + 'a') << endl;
    else
        cout << "None" << endl;

    return 0;
}