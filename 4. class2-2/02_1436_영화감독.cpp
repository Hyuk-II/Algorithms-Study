// 2024.03.28
// 종말의 수란 어떤 수에 6이 적어도 3개 이상 연속으로 들어가는 수를 말한다
// 제일 작은 종말의 수는 666이고, 그 다음으로 큰 수는 1666, 2666, 3666... N번째 종말의 수?

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    int num = 666;
    string check;

    while(1) {
        check = to_string(num);
        if(check.find("666") != -1) {
            // string 클래스의 find함수
            cnt++;
            if(cnt == N) {
                cout << num << endl;
                break;
            }
        }
        num++; // 666부터 N까지 모든 수를 확인한다
    }
}
