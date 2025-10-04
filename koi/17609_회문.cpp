#include <iostream>
#include <string>
using namespace std;

int isPalindrome(int left, int right, int del, string str) {
    while (left < right) {
        if (str[left] != str[right]) {
            if (del == 0) {
                if (isPalindrome(left + 1, right, 1, str) == 0 ||
                    isPalindrome(left, right - 1, 1, str) == 0) {
                    return 1;
                } else
                    return 2;
            } else
                return 2;
        } else {
            left++;
            right--;
        }
    }
    return 0;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string str;
        cin >> str;
        cout << isPalindrome(0, str.length() - 1, 0, str) << endl;
    }
}