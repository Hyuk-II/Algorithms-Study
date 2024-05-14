// 2024.04.08
// 카드는 제일 웨이서부터 1234 의 순서로 놓여있다. 1을 버리면 234가 남는다.
// 여기서 2를 제일 아래로 옮기면 342가 된다. 3을 버리면 42가 되고,
// 4를 밑으로 옮기면 24가 된다. 마지막으로 2를 버리고 나면, 남는 카드는 4가 된다.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int *arr = new int[N];

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    int front = 0;
    int rear = N-1;

    while(1) {
        if(front == rear) {
            break;
        }
        else {
            arr[front] = 0;
            do {
                front = (front+1)%N;
            } while(arr[front] == 0);
            rear = front;
            do {
                front = (front+1)%N;
            } while(arr[front] == 0);
        }
    }
    cout << arr[front];

    delete[] arr;
}
