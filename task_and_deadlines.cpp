#include <bits/stdc++.h>
using namespace std;
typedef vector<pair<int, int>> vp;

int main()
{
    int n, result = 0, last_time = 0;
    vp task;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int duration, deadline;
        cin >> duration >> deadline;
        task.push_back(make_pair(duration, deadline));
    }
    sort(task.begin(), task.end());
    for (auto p:task){
        last_time += p.first;
        result += p.second - last_time;
    }
    cout << result << endl;
    return 0;
}