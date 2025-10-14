# 연산자들을 스택에 넣어 두었다가 우선순위가 낮은 연산자가 나오면 스택에 있는 연산자 출력
# 피연산자 : 그대로 출력
# 연산자 : 우선순위에 따라 출력할지, 스택에 담아둘지 판단
# +, - : stack 이 비어있음,  top이 ( 이면, push, 아니면 스택에 쌓인 연산자 모두 출력
# *, / : stack 이 비어있음,  top이 ( 이면, top의 우선순위가 낮으면 push, 같으면 top 꺼내서 출력 현재 값 push

string = input()

stack = []

for i in string:
    if i == "+" or i == "-":
        if len(stack) == 0 or stack[-1] == "(":
            stack.append(i)
        else:
            while len(stack) > 0 and stack[-1] != "(":
                print(stack.pop(), end="")
            stack.append(i)

    elif i == "*" or i == "/":
        if len(stack) == 0 or stack[-1] == "(":
            stack.append(i)
        elif stack[-1] == "*" or stack[-1] == "/":
            print(stack.pop(), end="")
            stack.append(i)
        else:
            stack.append(i)

    elif i == "(":
        stack.append(i)
    elif i == ")":
        while stack[-1] != "(":
            print(stack.pop(), end="")
        stack.pop()
    else:
        print(i, end="")

while len(stack) > 0:
    print(stack.pop(), end="")

# A + B - C
# AB+C-

# A*(B+C)
# ABC+*

# A+B*C-D/E
# ABC*+DE/-
