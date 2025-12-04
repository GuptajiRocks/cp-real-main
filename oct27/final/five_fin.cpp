#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long geeky(vector<long long> arr_init, int N, int K) {
    
    if (N <= K) {
        return arr_init[N - 1];
    }
    
    vector<long long> series = arr_init;
    
    long long current_sum = 0;
    for (long long num : series) {
        current_sum += num;
    }
    
    for (int i = K; i < N; ++i) {
        
        long long next_term = current_sum;
        series.push_back(next_term);
        
        long long leaving_term = series[i - K];
        current_sum = current_sum - leaving_term + next_term;
    }
    
    return series[N - 1];
}

int main() {
    int N, K; 

    cin >> N >> K;

    vector<long long> arr_init;
    long long tc;
    for (int i = 0; i < K; i++) {
        if (!(cin >> tc)) return 1;
        arr_init.push_back(tc);
    }

    long long res = geeky(arr_init, N, K);

    cout << res << endl;

    return 0;
}