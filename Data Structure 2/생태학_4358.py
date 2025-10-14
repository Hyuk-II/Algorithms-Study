import sys

d = {}
cnt = 0
while True:
    i = sys.stdin.readline().rstrip()
    if i == '':
        break
    elif i in d:
        d[i] += 1
    else:
        d[i] = 1
    cnt += 1

for i in sorted(d):
    print(f"{i} {d[i]/cnt * 100:.4f}")
