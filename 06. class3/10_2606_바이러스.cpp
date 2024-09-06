// 2024.09.06

#include <iostream>
using namespace std;

class GraphNode {
  public:
    GraphNode *link;
    GraphNode(int n) {
        value = n;
        link = NULL;
    }

    int getValue() { return value; }

  private:
    int value;
};

int main() {
    int N, M;
    GraphNode **list;
    cin >> N;

    list = new GraphNode *[N];

    cin >> M;

    for (int i = 0; i < N; i++) {
        list[i] = new GraphNode(i + 1);
    }

    for (int i = 0; i < M; i++) {
        int v, w;
        cin >> v >> w;

        GraphNode *tmp = list[v - 1];
        while (1) {
            if (tmp->link == NULL) {
                break;
            } else {
                tmp = tmp->link;
            }
        }
        tmp->link = new GraphNode(w);
    }

    for (int i = 0; i < N; i++) {
        GraphNode *tmp = list[i];
        while (tmp->link) {
            cout << tmp->getValue() << "->";
            tmp = tmp->link;
        }
        cout << tmp->getValue() << '\n';
    }

    int *visited;

    for (int i = 0; i < N; i++) {
        delete list[i];
    }
    delete[] list;
}