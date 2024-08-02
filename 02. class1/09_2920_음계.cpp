// 2024.03.18
// 1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.
// 연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    int isAscending = 0, isDescending = 0, isMixed = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (arr[0] == 1)
        {
            isAscending = 1;
            if (arr[i] + 1 != arr[i + 1])
            {
                isAscending = 0;
                isMixed = 1;
                break;
            }
        }
        else if (arr[0] == 8)
        {
            isDescending = 1;
            if (arr[i] - 1 != arr[i + 1])
            {
                isDescending = 0;
                isMixed = 1;
                break;
            }
        }
        else
        {
            isMixed = 1;
            break;
        }
    }

    if (isAscending == 1)
    {
        cout << "ascending" << endl;
    }
    else if (isDescending == 1)
    {
        cout << "descending" << endl;
    }
    else if (isMixed == 1)
    {
        cout << "mixed" << endl;
    }

    return 0;
}
