#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> arr;
    int arrs[n];
    int tc;

    // Total arr elements pushed in
    for (int i = 0; i < n; i++) {
        cin >> tc;
        arr.push_back(tc);
    }

    int co = 0;
    for (int i = 0; i < n; i++) {
        co = co + arr[i];
        arrs[i] = co;
    }

    for (int numa : arr) {
        cout << numa << endl;
    }

    for (int num = 0; num < n; num++) {
        cout << arrs[num] << endl;
    }
}