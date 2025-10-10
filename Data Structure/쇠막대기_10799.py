from collections import deque

string = input()
string = string.replace("()", "|")

stack = deque()  # 막대기 계산을 위한 스택

# 계산 알고리즘
# 레이저를 만나면 이전 까지 확인된 막대기의 개수 만큼 증가, 쌓인 '(' 즉 스택의 길이 만큼 추가
# 막대기가 끝나면 개수 1개 추가

cnt = 0

for char in string:
    if char == "(":
        stack.append(char)
    elif char == "|":
        cnt += len(stack)
    else:
        stack.pop()
        cnt += 1

print(cnt)
