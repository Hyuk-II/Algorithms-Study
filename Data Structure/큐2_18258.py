# 시간제한에 걸렸던 문제
# 시간제한 요인
# 1. cmd 입력, 단순히 input()으로 받아 if문으로 slice 하는 과정에서 오버헤드 발생
#  -> sys 라이브러리, readline() 으로 index로 접근
# 2. list pop 연산, 변수를 출력하고 지운뒤 한칸씩 앞으로 땡기는 과정에서 오버헤드 발생
#  -> deque collection 사용, 블록형식의 이중연결리스트로 노드에 저장된 메모리 주소 값만 변경하면 됨
#     블록형식으로 여러 원소를 저장해 캐시 히트에도 이점이 있음

import sys
from collections import deque

n = int(input())
queue = deque()

for _ in range(n):

    cmd = sys.stdin.readline().split()

    if cmd[0] == "push":
        queue.append(cmd[1])

    elif cmd[0] == "pop":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())

    elif cmd[0] == "size":
        print(len(queue))

    elif cmd[0] == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)

    elif cmd[0] == "front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])

    elif cmd[0] == "back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])
