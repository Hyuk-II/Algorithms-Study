// 2024.04.01
// 첫째 줄부터 총 N개의 줄에 걸쳐 온라인 저지 회원을 나이 순
// 나이가 같으면 가입한 순으로 한 줄에 한 명씩 나이와 이름을 공백으로 구분해 출력한다.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    int age;
    string name;
};

bool compare(const person& a, const person& b)
{
    if(a.age != b.age) return a.age < b.age;
    return false;
}

int main()
{	
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;
    cin >> N;
    person people[100001];

    for (int i = 0; i < N; i++)
        cin >> people[i].age >> people[i].name;

    stable_sort(people, people + N, compare);

    for (int i = 0; i < N; i++)
        cout << people[i].age << " " << people[i].name << "\n";
}
