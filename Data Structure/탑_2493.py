# N*N 이하 시간으로 수행 하도록 설계하는게 관건인듯, 제한시간 1.5초
# 타워 높이 별 index 정보 저장은 메모리 초과 할듯, 가짓수 1억 -> 400MB, 메모리 최대 128MB

# 오른쪽 부터 자신보다 높은 타워를 찾지 못한 타워를 스택에 추가해 감
# 스택에는 지금 확인하고 있는 타워 중 아직 신호가 도달하지 못한 타워 들이 있음
# 나보다 작은 타워들은 전부 pop() 해서 현재 위치 기록 ( 어차피 현재 타워 못 넘어감 )
# 현재 타워도 왼쪽을 확인해야 하므로 push

n = int(input())
tower = list(map(int, input().split()))

answer = [0 for _ in range(n)]
stack = []

for i in range(n - 1, -1, -1):

    # 지금 타워가 스택 탑 보다 높으면, pop해서 기록, 지금 타워보다 낮은 것들만 기록
    while len(stack) > 0 and tower[i] >= stack[-1][1]:
        item = stack.pop()
        answer[item[0]] = i + 1

    stack.append((i, tower[i]))  # 타워 index와 타워 높이 push

for i in answer:
    print(i, end=" ")
