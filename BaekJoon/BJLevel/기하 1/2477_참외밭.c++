#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> dirandlen;
int direction_count[4] = {0, };

int main() {

    int num;

    cin >> num;

    int dir, len, count = 0;
    int area = 1, total_area = 1;
    int start = 0;

    for (int i = 0; i < 6; i++) {
        cin >> dir >> len;
        dirandlen.push_back(make_pair(dir, len));
        direction_count[dir-1]++;
    }
 
    // 벡터에 저장되어 있을 때 두번 나오는 방향이 먼저 시작하면 꼬인다.
    // 그래서 한번만 시작하는 방향 먼저 검토하는 방식으로 문제를 풀어 나간다.
    
    for(int i = 0; i < 6; i++){
        if (direction_count[dirandlen[i].first-1] == 1) {
            start = i;
            break;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if (direction_count[dirandlen[start].first-1] == 1) {
            total_area *= dirandlen[start].second;
        } else {
            if (count == 1 || count == 2) {
                area *= dirandlen[start].second;
            }
            count++;
        }

        start++;
        if (start == 6) {
            start = 0;
        }
    }

    cout << num * (total_area - area) << endl;

    return 0;
}