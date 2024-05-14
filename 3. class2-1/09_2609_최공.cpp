// 2024.03.22
// 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int max = (num1>num2)?num1:num2;
    int a, b;

    for(int i = 1; i <= max; i++) {
        if((num1 % i ==0)&&(num2 % i ==0)){
            a = i;
        }
    }

    int k1 = num1;
    int k2 = num2;
    while(true) {
        if(num1 > num2) {
            num2 += k2;
        }
        else if(num2 > num1) {
            num1 += k1;
        }

        if(num1 == num2) {
            b = num1;
            break;
        }
    }

    cout << a << "\n" << b << "\n";
    return 0;
}
