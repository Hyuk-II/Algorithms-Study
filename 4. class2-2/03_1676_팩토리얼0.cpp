// 2024.03.28
// N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

#include <iostream>
#define M 10000000
using namespace std;

int factorial_0(int);

int main() {
    int N;
    cin >> N;
    cout << factorial_0(N) << endl;
}

int factorial_0(int a) {
    long long fact = 1;
    int cnt = 0;
    if(a == 1  || a == 0) {
        return 0;
    }
    for(int i = 1; i <= a; i++) {
        fact = (fact*i)%M;
        if(fact % 10 == 0) {
            while(fact%10 == 0) {
                fact /= 10;
                cnt++;
            }
        }
    }
    return cnt;
}
