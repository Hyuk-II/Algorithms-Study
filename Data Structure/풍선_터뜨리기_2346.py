# 풍선의 값 만큼 이동해 터뜨릴 시 해당 번호 출력, 풍선 안의 값 만큼 다음 풍선으로 이동 -> rotate 사용
# 맨 왼쪽 값을 오른쪽으로 이동시 (양수로 회전) -> 터뜨려야 하는 값이 맨 마지막 -> deque pop
# 맨 오른쪽 값을 왼쪽으로 이동시 (음수로 회전) -> 터뜨려야 하는 값이 맨 앞 -> deque popleft

# class 구현보다, enumerate를 통한 index 접근이 공간적인 측면에서 더 효율적
# 2개의 값을 가진다고 무조건 class 구현보다 순서정보면 enumerate 활용이 효율적
# 프린터 큐 (1966) 에서 활용해봄

import sys
from collections import deque


class baloon:
    def __init__(self, num, value):
        self.num = num
        self.value = value

    def p(self):
        print(self.num, self.value)


queue = deque()
n = int(input())
values = sys.stdin.readline().split()

for i in range(n):
    queue.append(baloon(i + 1, int(values[i])))


b = queue.popleft()
rotate = b.value
print(1, end=" ")

while len(queue) > 0:
    queue.rotate(-rotate)

    if rotate < 0:
        b = queue.popleft()
    elif rotate > 0:
        b = queue.pop()

    print(b.num, end=" ")
    rotate = b.value
