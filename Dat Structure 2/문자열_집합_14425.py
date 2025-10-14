# 입력 하는 단어 전부 조회하면 시간초과
# n개 입력할때 맵 구성

n,m = map(int,input().split()) 

s = set()

for i in range(n):
    s.add(input())

cnt = 0
for i in range(m):
    if input() in s:
        cnt+=1

print(cnt)