#include <bits/stdc++.h>
using namespace std;

int maxProf(int arr[], int n) {
	int maxP = 0;
	int tc = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			tc = arr[j] - arr[i];
			if (maxP < tc) {
				maxP = tc;
			}
		}
	}
	return maxP;
}	

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int res = maxProf(arr, n);
	cout << "Max Profit Is: " << res << endl;

	return 0;
}
