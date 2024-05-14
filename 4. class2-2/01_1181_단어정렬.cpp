// 2024.03.26
// 알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
// 길이가 짧은 것부터, 길이가 같으면 사전 순으로 (단, 중복된 단어는 하나만 남기고 제거해야 한다.)

#include <iostream>
#include <algorithm> // sort() 사용 (하이브리드 정렬)
using namespace std;

int compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else return a.length() < b.length();
}

string str[20000];

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> str[i];
    }
    sort(str, str+N,compare);
    for(int i = 0; i < N; i++) {
        if(str[i] == str[i-1]) {continue;}
        cout << str[i] << endl;
    }
}
