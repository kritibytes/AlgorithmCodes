#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200};
    int n = 1305981;
    int count = 0;
    while (n > 0)
    {
        if (n >= coins.back())
        {
            n -= coins.back();
            count++;
        }
        else
        {
            coins.pop_back();
        }
    }
    cout << count << endl;
}