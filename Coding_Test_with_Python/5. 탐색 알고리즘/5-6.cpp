#include <iostream>
using namespace std;
#define INF 999999999

int graph[3][3] = {
    {0, 7, 5},
    {7, 0, INF},
    {5, INF, 0}
};

void print() {
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << graph[i][j] << ' '; 
        }
        cout << endl;
    }
}

int main() {
    print();
}