#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr[], int n, int sum)
{
    int curr_sum, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            curr_sum = arr[i] + arr[j];
            if (curr_sum == sum)
            {
                cout << "Sum found indexes "
                     << i << " and " << j;
                return 1;
            }
            if (curr_sum > sum)
                break;
        }
    }

    cout << "No sum found";
    return 0;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 7, 9, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    int sum = 12;
    twoSum(arr, n, sum);
    return 0;
}