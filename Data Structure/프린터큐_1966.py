# 순서 정보를 가지고 있는 문제로 enumerate 활용
# enumerate 객체의 0번 index는 index, 1번 index는 value로 접근할 수 있는 것이 관건

from collections import deque
import sys

n = int(input())

for _ in range(n):
    info = sys.stdin.readline().split()
    info[0], info[1] = int(info[0]), int(info[1])

    queue = deque(enumerate(map(int, input().split())))

    cnt = 1
    while True:

        max_value = -1
        for index, value in queue:
            if value > max_value:
                max_value = value

        while queue[0][1] != max_value:
            queue.rotate(-1)

        item = queue.popleft()
        if item[0] == info[1]:
            print(cnt)
            break
        else:
            cnt += 1
