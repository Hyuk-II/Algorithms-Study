# 정렬하면서 넣기? -> n*n
# n개씩만 저장해두기
# 입력하면서 n개 저장, 1개씩 확인하면서 최솟값보다 크면 교체
# 마지막에 남은것 정렬해서 1번째 출력
import sys

input = sys.stdin.readline

n = int(input())

arr = list(map(int, input().split()))
arr.sort()

for i in range(1, n):
    line = list(map(int, input().split()))
    
    for num in line:
        if num > arr[0]:
            arr[0] = num
            arr.sort()

print(arr[0])

