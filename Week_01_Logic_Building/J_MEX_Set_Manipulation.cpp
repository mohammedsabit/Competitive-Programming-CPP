// Topic: Set Theory / MEX Logic
// Problem J: Mahmoud and Ehab and the MEX
// Logic: 
// 1. Every integer i < x MUST be in the set. If it is missing, we must "add" it.
// 2. The integer x MUST NOT be in the set. If it exists, we must "erase" it.
// The total operations = (Count of missing numbers < x) + (Existence of x).
// Complexity: O(N * X) Time, O(N) Space.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target_mex;
    cin >> n >> target_mex;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int additions_required = 0;

    // Check all non-negative integers smaller than target_mex
    for(int i = 0; i < target_mex; i++)
    {   
        bool found = false;
        for(int j = 0; j < n; j++)
        {
            if(a[j] == i)
            {
                found = true;
                break;
            }
        }
        // If a number smaller than MEX is missing, we must add it
        if(!found)
            additions_required++;
    }

    int erasures_required = 0;

    // Check if the target_mex itself exists in the set
    for(int i = 0; i < n; i++)
    {
        if(a[i] == target_mex)
        {
            // MEX cannot exist in the set; it must be erased
            erasures_required++;
        }
    }

    // Total minimal operations
    cout << additions_required + erasures_required << endl;
    
    return 0;
}