// 2024.04.02
// 체스판 다시칠하기

#include <iostream>
using namespace std;

void copy(char [][9], char [][51], int, int);
int count(char[][9]);

char case1[8][8] = {
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}
};

char case2[8][8] = {
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}
};

int main() {
    int N, M;
    char map[50][51];
    char map2[8][9];
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> map[i];
    }

    int min = 2500;
    int cnt = 0;
    for(int i = 0; i+7 < N; i++) {
        for(int j = 0; j+7 < M; j++) {
            copy(map2, map, i, j);
            cnt = count(map2);

            if(cnt < min) min = cnt;
        }
    }

    cout << min << endl;
}

void copy(char map2[][9], char map[][51], int y, int x) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            map2[i][j] = map[y+i][x+j];
        }
    }
}

int count(char map[][9]) {
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(map[i][j] != case1[i][j]) cnt1++;
        }
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(map[i][j] != case2[i][j]) cnt2++;
        }
    }
    return (cnt1<=cnt2)?cnt1:cnt2;
}
