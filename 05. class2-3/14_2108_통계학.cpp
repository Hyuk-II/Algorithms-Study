// 2024.08.29

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> num_list(N);

    for (int i = 0; i < N; i++) {
        cin >> num_list[i];
    }

    double sum = 0;

    for (int i = 0; i < N; i++) {
        sum += num_list[i];
    }

    cout << floor(sum / N + 0.5) << endl; // 산술평균

    sort(num_list.begin(), num_list.end());

    cout << num_list[N / 2] << endl; // 중앙값

    map<int, int> num_freq;
    map<int, int>::iterator it;

    for (int i = 0; i < N; i++) {
        num_freq[num_list[i]] += 1;
    }

    int max = 0;
    for (it = num_freq.begin(); it != num_freq.end(); it++) {
        if (it->second > max) {
            max = it->second;
        }
    }

    int ret = 0;
    for (it = num_freq.begin(); it != num_freq.end(); it++) {
        if (it->second == max) {
            if (ret == 0) {
                ret = it->first;
            } else {
                ret = it->first;
                break;
            }
        }
    }

    cout << ret << endl; // 최빈값;

    cout << num_list[N - 1] - num_list[0] << endl; // 범위
}