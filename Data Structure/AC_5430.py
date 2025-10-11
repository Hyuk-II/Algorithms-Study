# 리스트의 회전이 많아짐 -> 횟수를 저장해 최소한의 회전만 수행

from collections import deque
import sys

T = int(input())

input = sys.stdin.readline

for _ in range(T):
    cmds = input()
    num = int(input())
    arr = input().strip()

    if num == 0:
        arr = deque([])
    else:
        arr = deque(arr[1:-1].split(","))

    rotate = 0
    for cmd in cmds:
        if cmd == "R":
            rotate += 1
        elif cmd == "D":
            if len(arr) == 0:
                arr = "error"
                break
            if rotate % 2 == 0:
                arr.popleft()
            else:
                arr.pop()

    if arr == "error":
        print(arr)
    else:
        if rotate % 2 == 0:
            print("[" + ",".join(arr) + "]")
        else:
            arr.reverse()
            print("[" + ",".join(arr) + "]")
