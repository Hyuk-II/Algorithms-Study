// 2024.03.14
// A＠B = (A+B)×(A-B)

#include <iostream>
using namespace std;

long compute(long, long);

int main()
{
    long A, B;
    cin >> A >> B;

    cout << compute(A, B) << endl;

    return 0;
}

long compute(long a, long b)
{
    return (a + b) * (a - b);
}
