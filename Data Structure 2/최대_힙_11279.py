import sys
import heapq

n = int(sys.stdin.readline())
heap = []

for _ in range(n):
    num = int(sys.stdin.readline())

    if num > 0:
        heapq.heappush(heap, -num)

    else:
        if not heap:
            print(0)
        else:
            print(-heapq.heappop(heap))
