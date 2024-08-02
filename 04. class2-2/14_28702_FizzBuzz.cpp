// 2024.08.02
#include <iostream>
#include <string>
using namespace std;

int main() {
    string Sarr[3];

    for (int i = 0; i < 3; i++) {
        cin >> Sarr[i];
    }

    int Iarr[3] = {-1};

    for (int i = 0; i < 3; i++) {
        if (Sarr[i] != "Fizz" && Sarr[i] != "Buzz" && Sarr[i] != "FizzBuzz") {
            Iarr[i] = stoi(Sarr[i]);
        }

        if (Sarr[i] == "Fizz") {
            Iarr[i] = -1;
        } else if (Sarr[i] == "Buzz") {
            Iarr[i] = -2;
        } else if (Sarr[i] == "FizzBuzz") {
            Iarr[i] = -3;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (Iarr[i] > 0) {
            for (int j = i + 1; j < 3; j++) {
                Iarr[j] = Iarr[j - 1] + 1;
            }
        } else if (Iarr[i] == -1) {
            for (int j = i + 1; j < 3; j++) {
                if (Iarr[j] > 0) {
                    Iarr[i] = 3 * (Iarr[j] / 3);
                }
            }
        } else if (Iarr[i] == -2) {
            for (int j = i + 1; j < 3; j++) {
                if (Iarr[j] > 0) {
                    Iarr[i] = 5 * (Iarr[j] / 5);
                }
            }

        } else if (Iarr[i] == -3) {
            for (int j = i + 1; j < 3; j++) {
                if (Iarr[j] > 0) {
                    Iarr[i] = 15 * (Iarr[j] / 15);
                }
            }
        }
    }

    if ((Iarr[2] + 1) % 15 == 0) {
        cout << "FizzBuzz";
    } else if ((Iarr[2] + 1) % 5 == 0) {
        cout << "Buzz";
    } else if ((Iarr[2] + 1) % 3 == 0) {
        cout << "Fizz";
    } else {
        cout << Iarr[2] + 1;
    }
}