// 2024.03.13
// 입력 받은 대로 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    char str[101];
    for(int i = 0; i < 100; i++) {
        cin.getline(str, 101);
        if(str == "") {
            break;
        }
        cout << str << "\n";
    }

    return 0;
}
