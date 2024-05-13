// 2024.03.12
// 윤년 -> 1, 아니면 -> 0 출력

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (((year%4==0)&&(year%100!=0))||(year%400==0)) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}
