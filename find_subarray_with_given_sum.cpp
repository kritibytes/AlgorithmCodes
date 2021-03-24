#include <bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
	int curr_sum, i, j;

	for (i = 0; i < n; i++) {
		curr_sum = arr[i];

		for (j = i + 1; j < n; j++) {
			curr_sum = curr_sum + arr[j];
			if (curr_sum == sum) {
				cout << "Sum found between indexes "
					<< i << " and " << j;
				return 1;
			}
			if (curr_sum > sum)
				break;
		}
	}

	cout << "No subarray found";
	return 0;
}

int main()
{
	int arr[] = {1, 4, 20, 3, 10, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 33;
	subArraySum(arr, n, sum);
	return 0;
}