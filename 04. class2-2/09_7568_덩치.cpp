// 2024.04.04
// 덩치 등수 매기기

#include <iostream>
using namespace std;

class Man {
public:
    int x, y;
    int rank;
};

int is_small(Man, Man);

int main() {
    int N;
    cin >> N;

    Man* list;
    list  = new Man[N];

    for(int i = 0; i < N; i++) {
        cin >> list[i].x >> list[i].y;
        list[i].rank = 1;
    }
    

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(is_small(list[j],list[i]) == 1) {
                list[j].rank++;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        cout << list[i].rank << " ";
    }
    cout << "\n";

    delete[] list;
}

int is_small(Man a, Man b) {
    if(a.x < b.x) {
        if(a.y < b.y) return 1;
        else return 0;
    }
    else return 0;
}
