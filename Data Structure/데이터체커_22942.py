import sys

input = sys.stdin.readline

n = int(input())


# 한점에 대해서 모든 원에 교점이 없는지 확인
# 단순하게 O(N*N) 으로 걸릴 듯
# 스택을 통해서 실행시간 줄여야 함
# 스택에 하나씩 쌓아가는건 의미가 없음

# pop이 반드시 있어야 함, 순서대로 확인해야함  -> 반지름 위치대로 정렬 필요 ( 땡 )
# 괄호 응용 문제, 서로 다른 괄호가 교차 되어 있으면 만나는 원

# 3 1 -> 2, 4
# 4 1 -> 3, 5 // 3이 2, 4 사이에 있으니 두 점에서 만남

# 입력시 (왼 좌표, 중심), (오른 좌표, 중심) 리스트에 추가
# 좌표로 정렬한 다음에, 스택에 집어넣기 같은 중심이면 pop, 다 넣었을 때 스택 비어 있으면 YES, 아니면 NO
# 다 집어넣었을 때 스택 비어있으면 YES

points = []

for i in range(n):
    o, r = map(int, input().split())
    points.append([o - r, o])
    points.append([o + r, o])

points.sort()


stack = []
for point in points:
    if len(stack) == 0:
        stack.append(point)
    else:
        if stack[-1][1] == point[1]:
            stack.pop()
        else:
            stack.append(point)

if len(stack) == 0:
    print("YES")
else:
    print("NO")
