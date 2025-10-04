from collections import deque

n = int(input())

for i in range(n):
    stack = deque()
    s = input()

    for j in s:
        if j == ")":
            if len(stack) == 0:
                stack.append(j)
                break
            if stack[-1] == "(":
                stack.pop()
            else:
                stack.append(j)
                break
        else:
            stack.append(j)

    if len(stack) == 0:
        print("YES")
    else:
        print("NO")
