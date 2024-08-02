// 2024.05.10 ~ 17
// 우선순위가 높은 작업 먼저 시행하는 프린터, 특정 작업이 몇번째에 실행되는지 출력
// 작업의 고유 아이디를 저장하고 있을 필요있음

#include <iostream>
using namespace std;

typedef struct Job{
    int id; // 작업에 고유 번호, 선택한 작업이 출력됐는지 확인
    int priority; // 작업의 우선순위
}Job;

class Queue {
    Job queue[101];
    int front; // 100
    int rear; // 100
    // Circular queue 구현
public:
    Queue() {
        for(int i = 0; i < 101; i++) {
            queue[i].id = 0;
            queue[i].priority = 0;
            front = 100;
            rear = 100;
        } // 초기 queue 설정
    }

    int is_empty() {
        if(front == rear) return 1;
        else return 0;
    } 
    int is_full() {
        if((rear+1)%101 == front) return 1;
        else return 0;
    } 

    void addq(Job x) {
        if(is_full()) {
            cout << "queue is full" << endl;
        }
        else {
            rear = (rear+1)%101;
            queue[rear] = x;
        }
    } 

    Job deleteq() {
        if(is_empty()) {
            cout << "queue is empty" << endl;
            return queue[front];
        }
        else {
            front = (front+1)%101;
            return queue[front];
        } 
    }
    void show() {
        int i = front;
        do {
            i = (i+1)%101;
            cout << "P: " << queue[i].priority << " id: " << queue[i].id << endl;
        } while(i != rear);
    }

    int compute(int M) {
        int find = queue[M].id;
        // 몇번째 출력인지 확인할 작업의 id 저장
        int cnt = 0;

        while(true) {
            cnt++;
            if(print() == find) {
                break;
            } // 출력된 id가 찾고자하는 id이면 출력 종료
        }

        return cnt; // 출력된 순서 
    }

    int print() {
        if((front+1)%101 == rear) {
            return deleteq().id;
        } // queue에 작업이 1개밖에 없다면 id 리턴
        Job tmp;
        int max_index = (front+1)%101;
        for(int i = (max_index+1)%101; i != rear; i=(i+1)%101) {
            if(queue[max_index].priority < queue[i].priority) {
                max_index = i;
            }
        } // queue의 처음 부터 마지막 까지 우선순위 최대 비교, 클 떄만 index 최신화 -> 우선순위가 같은 작업은 들어온 순서
        if(queue[max_index].priority < queue[rear].priority) {
                max_index = rear;
        } // 맨 마지막 index에서는 반복이 종료됐기 때문에, 마지막 index만 다시 비교


        while((front+1)%101 != max_index) {
            tmp = deleteq();
            this->addq(tmp);
        } // front 다음이 최대 index일 때까지 작업들을 뒤로 붙인다

        tmp = deleteq();
        return tmp.id;
        // 가장 큰 우선순위 작업을 출력하고 id를 리턴
    }
};

int main() {
    int T, N, M;
    cin >> T;

    for(int i = 0; i < T; i++) {
        Queue q;
        cin >> N >> M;
        for(int i = 0; i < N; i++) {
            Job* j = new Job;
            cin >> j->priority;
            j->id = (j->priority)+i*31;
            // id는 우선순위 + 31(소수)*i번째 입력
            q.addq(*j);
            // queue에 작업 추가
        }
        cout << q.compute(M) << endl;
    }
}
