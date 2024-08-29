// 2024.08.27

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

class Integer {
  public:
    int num;
    int cnt;
    static int max_cnt;
    static int max_freq_num;
    Integer *left;
    Integer *right;

    Integer(int n) {
        num = n;
        cnt = 1;
        left = NULL;
        right = NULL;
    }

    double sum() {
        double sum = 0.0;
        sum += this->cnt * this->num;

        if (this->left) {
            sum += this->left->sum();
        }

        if (this->right) {
            sum += this->right->sum();
        }

        return sum;
    }

    int range() {
        int min, max;
        Integer *tmp = this;

        while (tmp->left) {
            tmp = tmp->left;
        }
        min = tmp->num;

        tmp = this;
        while (tmp->right) {
            tmp = tmp->right;
        }
        max = tmp->num;

        return max - min;
    }

    int max_freq() {
        if (this->left) {
            this->left->max_freq();
        }

        if (this->cnt == max_cnt) {
            if (max_freq_num == 10000) {
                max_freq_num = this->num;
            } else if (max_freq_num != this->num) {
                max_freq_num = this->num;
                return max_freq_num;
            }
        }

        if (this->right) {
            this->right->max_freq();
        }

        return max_freq_num;
    }

    void print() {
        if (this->left) {
            this->left->print();
        }

        cout << "num : " << this->num << " " << "cnt : " << this->cnt << endl;

        if (this->right) {
            this->right->print();
        }
    }
};

int Integer::max_cnt = 0;
int Integer::max_freq_num = 10000;

int main() {
    Integer *root = NULL;
    int *num_list;

    int N;
    cin >> N;
    num_list = new int[N];

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        num_list[i] = num;

        if (root == NULL) {
            root = new Integer(num);
            Integer::max_cnt = 1;
        } else {
            Integer *tmp = root;

            while (1) {
                if (num == tmp->num) {
                    tmp->cnt++;

                    if (tmp->cnt > Integer::max_cnt) {
                        Integer::max_cnt = tmp->cnt;
                    }

                    break;
                }

                else if (num > tmp->num) {
                    if (tmp->right == NULL) {
                        tmp->right = new Integer(num);
                        break;
                    }
                    tmp = tmp->right;
                }

                else if (num < tmp->num) {
                    if (tmp->left == NULL) {
                        tmp->left = new Integer(num);
                        break;
                    }
                    tmp = tmp->left;
                }
            }
        }
    }

    // root->print();
    sort(num_list, num_list + N);

    cout << floor((root->sum() / (double)N) + 0.5) << endl; // 산술평균
    cout << num_list[N / 2] << endl;                        // 중앙값
    cout << root->max_freq() << endl;                       // 최빈값
    cout << root->range() << endl;                          // 범위

    delete[] num_list;
    return 0;
}