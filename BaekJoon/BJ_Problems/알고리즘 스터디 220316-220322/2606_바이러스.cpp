#include<iostream>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include<algorithm>
using namespace std;



int main() {

    int coms;
    map <int, vector<int>> com;
    cin >> coms; // 컴퓨터 수
    bool* check = new bool[coms + 1];

    for (int i = 1; i <= coms; i++)
        check[i] = false;

    for (int i = 1; i <= coms; i++)
        com.insert(pair<int, vector<int>>(i, {}));

    int connec;
    cin >> connec;
    
    int a, b;

    for (int i = 0; i < connec; i++) {
        cin >> a >> b; // 컴퓨터, 연결하는 컴퓨터
        com[a].push_back(b);
        com[b].push_back(a);
    }
    
    queue<int> che;
    check[1] = true;
    for (auto elem : com[1]) {
        che.push(elem);
        check[elem] = true;
    }

    while (!che.empty()) {
        int num = che.front();
        che.pop();
        for (auto elem : com[num]) {
            if (!check[elem]) { // 확인 x
                che.push(elem);
                check[elem] = true;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= coms; i++) {
        if (check[i])
            count++;
    }

    cout << count << endl;

    return 0;
}