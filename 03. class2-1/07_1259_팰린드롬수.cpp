// 2024.03.21
// 각 줄마다 주어진 수가 팰린드롬수면 'yes', 아니면 'no'를 출력한다.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int N = 1;
    int buf = 0;

    while(true) {
        num.clear();
        cin >> N;
        int is_palin = 1;
        if(N==0) break;

        buf = N;
        while(buf>0) {
            num.push_back(buf%10);
            buf /= 10;
        } // vector에 1의 자리수부터 한칸씩 입력
        for(int i = 0; i < num.size()/2+1; i++) {
            if(num[i] != num[num.size()-i-1]) {
                is_palin = 0;
                break; // 대칭이 아닌 위치를 발견하면, 팰린드롬수가 아님으로 저장하고 반복종료
            }
        } // 처음부터, 중간까지 대칭되는 위치와 비교
        
        if(is_palin == 0) cout << "no" << '\n';
        else cout << "yes" << '\n';
    }

    return 0;
}
