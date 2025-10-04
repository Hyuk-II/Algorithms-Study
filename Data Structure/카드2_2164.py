from collections import deque

n = int(input())

card = deque([i + 1 for i in range(n)])

while len(card) > 1:
    card.popleft()
    card.rotate(-1)

print(card[0])
