#include <bits/stdc++.h>
using namespace std;

int jesus(vector<int> arr, int tbd, int k) {
    int tsum = 0;
    for (int i = k; i < tbd+1; i++) {
        tsum = 0;
        for (int j = i-1; j >= (j-k+1); j--) {
            tsum += arr[j];
        }
        arr[k] = tsum;
    }

    return arr[tbd-1];

}

int main() {
    int tbd;
    int k;
    cin >> tbd >> k;
    vector<int> arr;
    int tc;
    for (int i = 0; i < k; i++) {
        cin >> tc;
        arr.push_back(tc);
    }

    // keeping the example in mind, up until here the vector has 0 1 2 in its memory.

    int res = jesus(arr, tbd, k);

    cout << res << endl;

    return 0;

}