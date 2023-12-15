#include <iostream>
#include <vector>
using namespace std;
#define INF 999999999

vector<pair<int, int> > graph[3];

void input() {
    graph[0].push_back({1, 7});
    graph[0].push_back({2, 5});

    graph[1].push_back({0, 7});

    graph[2].push_back({0, 5});
}

void print() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << '(' << graph[i][j].first << ',' << graph[i][j].second << ')' << ' ';
        }
    }
}

int main() {
    input();
    print();
}