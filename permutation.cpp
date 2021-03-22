#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;
const int n = 3;
int chosen[n];

void search()
{
    if (permutation.size() == n)
    {
        for (int i : permutation)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()

{
    search();
    return 0;
}