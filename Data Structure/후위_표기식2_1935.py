from collections import deque

n = int(input())
exp = input()

# 숫자 저장 덱
nums = deque()

# 후위 연산식 계산을 위한 스택
# 연산자를 만나면 상위 2개 피연산자를 pop 해 연산후 다시 push
stack = deque()

for i in range(n):
    nums.append(int(input()))

num1 = 0
num2 = 0

for comp in exp:
    if comp == "*":
        num2 = stack.pop()
        num1 = stack.pop()
        stack.append(num1 * num2)

    elif comp == "/":
        num2 = stack.pop()
        num1 = stack.pop()
        stack.append(num1 / num2)

    elif comp == "+":
        num2 = stack.pop()
        num1 = stack.pop()
        stack.append(num1 + num2)

    elif comp == "-":
        num2 = stack.pop()
        num1 = stack.pop()
        stack.append(num1 - num2)

    else:
        stack.append(nums[ord(comp) - 65])

print(f"{stack[0]:.2f}")
