// 2024.04.11
// 첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    int* card = new int[N];
    for(int i = 0; i < N; i++) {
        cin >> card[i];
    }
    sort(card, card+N);

    int M;
    cin >> M;
    int* check = new int[M];
    for(int i = 0; i < M; i++) {
        cin >> check[i];
    }

    for(int i = 0; i < M; i++) {
        int cnt = upper_bound(card, card+N, check[i])-card;
        cnt = cnt - (lower_bound(card,card+N,check[i])-card);
        cout << cnt << " ";
    }

    delete[] card;
    delete[] check;
}
