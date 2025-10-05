# python으로 deque 구현해보기
# list가 데이터 이동에 오버헤드 존재 -> circular 하게 구현
# capacity = 10000

import sys # python 빠른 입출력을 위한 라이브러리


class deque:
    def __init__(self):
        self.f = 0
        self.b = 0
        self.s = 0
        self.q = [0 for i in range(10000)]

    def is_empty(self):
        if self.s == 0:
            return 1
        return 0

    def size(self):
        return self.s

    def push_front(self, value):
        if self.s == 0:
            self.q[self.f] = value
        else:
            self.f = (self.f + 9999) % 10000
            self.q[self.f] = value
        self.s += 1

    def push_back(self, value):
        if self.s == 0:
            self.q[self.b] = value
        else:
            self.b = (self.b + 1) % 10000
            self.q[self.b] = value
        self.s += 1

    def pop_front(self):
        if self.s == 0:
            return -1
        elif self.s == 1:
            ret = self.q[self.f]
            self.s -= 1
            return ret
        else:
            ret = self.q[self.f]
            self.f = (self.f + 1) % 10000
            self.s -= 1
            return ret

    def pop_back(self):
        if self.s == 0:
            return -1
        elif self.s == 1:
            ret = self.q[self.b]
            self.s -= 1
            return ret
        else:
            ret = self.q[self.b]
            self.b = (self.b + 9999) % 10000
            self.s -= 1
            return ret

    def front(self):
        if self.s == 0:
            return -1
        else:
            return self.q[self.f]

    def back(self):
        if self.s == 0:
            return -1
        else:
            return self.q[self.b]


n = int(input())

dq = deque()
for _ in range(n):
    cmd = sys.stdin.readline().split() # 입력 오버헤드 감소

    if cmd[0] == "push_front":
        dq.push_front(cmd[1])
    elif cmd[0] == "push_back":
        dq.push_back(cmd[1])
    elif cmd[0] == "pop_front":
        print(dq.pop_front())
    elif cmd[0] == "pop_back":
        print(dq.pop_back())
    elif cmd[0] == "size":
        print(dq.size())
    elif cmd[0] == "empty":
        print(dq.is_empty())
    elif cmd[0] == "front":
        print(dq.front())
    elif cmd[0] == "back":
        print(dq.back())
