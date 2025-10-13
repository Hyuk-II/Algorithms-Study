# 같은 순서 쌍 만들어두고 모든 조합 생성해보기
# 데이터 생성에 자료구조 자꾸 사용하려고 하는데
# 계산에서 사용하려고 트라이하는게 맞는 듯
from itertools import combinations

string = input()

stack = []
items = []

for i in range(len(string)):

    if string[i] == "(":
        stack.append(i)
    elif string[i] == ")":
        items.append([stack.pop(), i])  # 여기까지는 다른 사람들이랑 비슷하게 코딩 함

items.reverse()  # 괄호 위치

ret = set()
# 조합 계산
for i in range(len(items)):
    # combinations 사용법을 몰랐던 문제
    for item in combinations(items, i+1):
        s = list(string)
        for index in item:
            s[index[0]] = ""
            s[index[1]] = ""
        ret.add("".join(s))

for i in sorted(list(ret)):
    print(i)

# (1+(2*(3+4))) 111

# (1+(2*3+4))   110
# (1+2*(3+4))   101
# (1+2*3+4)     100
# 1+(2*(3+4))   011
# 1+(2*3+4)     010
# 1+2*(3+4)     001
# 1+2*3+4       000
