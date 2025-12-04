#include <bits/stdc++.h>
using namespace std;

void bubsort(char arr[], int n) {
	bool swapp = false;
	for (int i = 0; i < n-1; i++) {
		swapp = false;
		for (int j = 0; j < n-1-i; j++) {
			if (arr[j] < arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapp = true;
			}
		}
		if (!swapp) {
			break;
		}
	}
}

int main() {
	//char arr[] = {'n', 'g', 'z', 'a', 'b', 'a'};
	int n;
	cin >> n;
	char arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bubsort(arr, n);

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
