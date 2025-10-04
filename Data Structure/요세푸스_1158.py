from collections import deque

K, N = map(int, input().split())

c = deque([i + 1 for i in range(K)])
ret = deque()

while len(c) > 0:
    c.rotate(-N)
    ret.append(c.pop())

print("<", end="")
for i in range(K - 1):
    print(ret[i], end=", ")
print(f"{ret[K-1]}>")
