// 2024.03.19
// 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int maxCase;

    while(a!=0 || b!=0 || c!=0) {
        cin >> a >> b >> c;
        if(a>b && a>c) maxCase = 0;
        else if(b>a && b>c) maxCase = 1;
        else if(c>a && c>b) maxCase = 2;
        else if(a==0 && b==0 && c==0) maxCase = -1;

        switch (maxCase)
        {
        case 0:
            if(a*a == b*b+c*c) {
                cout << "right" << '\n';
            }
            else cout << "wrong" << '\n';
            break;
        case 1:
            if(b*b == a*a+c*c) {
                cout << "right" << '\n';
            }
            else cout << "wrong" << '\n';
            break;
        case 2:
            if(c*c == b*b+a*a) {
                cout << "right" << '\n';
            }
            else cout << "wrong" << '\n';
            break;
        case -1:
            break;
        }
    }
    
    return 0;
}
