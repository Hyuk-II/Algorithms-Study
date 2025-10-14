// 정렬과정이 O(N*N)
// 메모리 할당으로 구현하면 더 빠를까?
#include <iostream>
using namespace std;

class Heap {
    int arr[1000000];
    int top;
    // 3 2 1
    void buildHeap() {
        for (int i = top; i > 0; i--) {
            int index;
            if (i % 2 == 0) {
                index = i - 1;
            } else {
                index = i;
            }

            while (index > 0) {
                if (index != top && arr[index] < arr[index + 1]) {
                    index += 1;
                }

                if (arr[index] > arr[index / 2]) {
                    int temp = arr[index];
                    arr[index] = arr[index / 2];
                    arr[index / 2] = temp;
                }

                index /= 2;
            }
        }
    }

    void print() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }

  public:
    Heap() { top = -1; }

    void push(int num) {
        arr[++top] = num;
        this->buildHeap();
    }

    void popMax() {
        if (top == -1) {
            cout << 0 << '\n';
        } else {
            cout << arr[0] << '\n';
            arr[0] = 0;
            this->buildHeap();
            top--;
        }
    }
};
int main() {
    int x;
    cin >> x;

    Heap heap;

    int num = 0;
    for (int i = 0; i < x; i++) {
        cin >> num;

        if (num == 0) {
            heap.popMax();
        }

        else {
            heap.push(num);
        }
    }
}
