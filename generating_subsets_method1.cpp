#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
vector<vector<string>> subsets;
vector<string> students = {"Yunis","Sevil","Tərlan","Süleyman","Aftandil"};
int n;

auto fetchByIndex(vector<int> ss){
    vector<string> result;
    for(int i:ss){
        result.push_back(students[i]);
    }
    return result;
}

void search(int k,int limit)
{
    if (k == n)
    {
        if(subset.size() == limit) subsets.push_back(fetchByIndex(subset));
    }
    else
    {
        search(k + 1,limit);
        subset.push_back(k);
        search(k + 1,limit);
        subset.pop_back();
    }
}

int main()
{
    int comb_limit;
    cin >> n >> comb_limit;
    search(0,comb_limit);
    for(auto sub:subsets){
        for(auto i:sub){
            cout << i << " ";
        }
        cout << endl;
    }
}