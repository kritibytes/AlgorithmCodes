#include <bits/stdc++.h>
using namespace std;

vector<int> nums;

int minq(int a, int b)
{
    if (a == b)
    {
        return nums[a];
    }
    else
    {
        int l = b - a + 1;
        int k = 0;
        for (int t = 0; (1 << t) < l; t++)
        {
            k = (1 << t);
        }
        return min(minq(a, a + k - 1), minq(b - k + 1, b)); 
    }
}

int main()
{
    int n, numsI;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> numsI;
        nums.push_back(numsI);
    }
    int a, b;
    cin >> a >> b;
    cout << minq(a, b) << endl;
    return 0;
}