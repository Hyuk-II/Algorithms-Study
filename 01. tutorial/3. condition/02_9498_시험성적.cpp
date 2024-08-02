// 2024.03.12
// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력

#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if (100 >= score && score >= 90)
        cout << 'A' << endl;
    else if (90 > score && score >= 80)
        cout << 'B' << endl;
    else if (80 > score && score >= 70)
        cout << 'C' << endl;
    else if (70 > score && score >= 60)
        cout << 'D' << endl;
    else cout << 'F' << endl;

    return 0;
}
