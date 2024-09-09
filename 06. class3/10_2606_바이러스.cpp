// 2024.09.07

#include <iostream>
#include <vector>
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

        tmp = list[w - 1];
        while (1) {
            if (tmp->link == NULL) {
                break;
            } else {
                tmp = tmp->link;
            }
        }
        tmp->link = new GraphNode(v);
    }

    // for (int i = 0; i < N; i++) {
    //     GraphNode *tmp = list[i];
    //     while (tmp->link) {
    //         cout << tmp->getValue() << "->";
    //         tmp = tmp->link;
    //     }
    //     cout << tmp->getValue() << '\n';
    // }

    int *visited;
    visited = new int[N];
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    }

    vector<int> stack;
    stack.push_back(0);
    while (!stack.empty()) {
        GraphNode *tmp = list[stack.back()]->link;
        stack.pop_back();
        while (tmp) {
            if (visited[tmp->getValue() - 1] == 0) {
                visited[tmp->getValue() - 1] = 1;
                stack.push_back(tmp->getValue() - 1);
                tmp = tmp->link;
            } else {
                tmp = tmp->link;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i < N; i++) {
        cnt += visited[i];
    }

    cout << cnt;

    for (int i = 0; i < N; i++) {
        delete list[i];
    }
    delete[] list;
    delete[] visited;
}