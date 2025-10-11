# 회전을 사용하는 문제가 아니므로 굳이 deque을 사용할 필요는 없음
# 임시 변수를 두어 현재 가장 밖의 괄호에 따라 적절한 연산을 수행

# (()[])
# stack : (, ((, (() -> (, ([,  ([] -> (, () ->
# value : 2,  4,    2    ,  6,     2    ,    1
# pop 될 때, 직전이 '(' 였다면 해당값을 더하고 value //= 2
# ( ( ( ) ) )
#       1 2 3 <- 1번에서 미리 곱해진 값이 더해지기 때문에, 2번에서 다시 더하면 안됨
#                따라서 직전 문자가 '(' 일때만 덧셈 수행
stack = []
string = input()

current = 1
value = 0
for index in range(len(string)):
    if string[index] == "(":
        stack.append(string[index])
        current *= 2

    elif string[index] == "[":
        stack.append(string[index])
        current *= 3

    elif string[index] == ")":
        if len(stack) == 0 or stack[-1] == "[":
            value = 0
            break
        else:
            if string[index - 1] == "(":
                value += current
            stack.pop()
            current //= 2

    elif string[index] == "]":
        if len(stack) == 0 or stack[-1] == "(":
            value = 0
            break
        else:
            if string[index - 1] == "[":
                value += current
            stack.pop()
            current //= 3

if len(stack) > 0:
    print(0)
else:
    print(value)
