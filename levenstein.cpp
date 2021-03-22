#include <iostream>
#include <cmath>
using namespace std;

string A, B;

int cost(int a, int b)
{
    if (A[a - 1] == B[b - 1])
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int distance(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    else if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return min(
            distance(a - 1, b) + 1,
            min(distance(a, b - 1) + 1,
                distance(a - 1, b - 1) + cost(a, b)));
    }
}

int main()
{
    cin >> A >> B;
    cout << distance(A.size(), B.size()) << endl;
    return 0;
}