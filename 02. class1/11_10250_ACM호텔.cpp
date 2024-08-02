// 2024.03.18
// 초기에 모든 방이 비어있다고 가정하에 이 정책에 따라 N 번째로 도착한 손님에게 배정될 방 번호를 계산하는 프로그램

#include <iostream>
using namespace std;

int main()
{
    int T, H, W, N;
    int room = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        // 호텔의 층수 방수 손님순서 입력
        if (N%H == 0) {
            room = H*100 + (N/H);
        }
        else {
            room = (N%H)*100 + (N/H)+1;
        }
        // 손님의 층수가 우선적으로 상승, N%H == 0 이면, 가장 높은 층에 위치, N/H번 열이 다 채워짐, 따라서 N/H이 호실
        // N%H != 0 이면 N/H번 열이 다채워졌고, 추가로 더 들어옴, 따라서 N/H+1이 호수

        cout << room << endl;
    }

    return 0;
}
