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
        if (N%H == 0) {
            room = H*100 + (N/H);
        }
        else {
            room = (N%H)*100 + (N/H)+1;
            }

        cout << room << endl;
    }

    return 0;
}
