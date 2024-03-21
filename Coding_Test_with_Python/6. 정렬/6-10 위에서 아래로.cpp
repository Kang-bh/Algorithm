#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
solve 1 vs solve 2 내용 velog 정리
vector vs array 내용 예정
*/

vector<int> number_list;

void solve(int N) {
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        number_list.push_back(num);
    }

    sort(number_list.rbegin(), number_list.rend());

    for (auto num : number_list) {
        cout << num << " ";
    }
    cout << endl;
}

int n;
vector<int> v;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    /*
    solve 1
    */
    // N을 입력받기
    cin >> n;

    // N개의 정수를 입력받아 리스트에 저장
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // 기본 정렬 라이브러리를 이용하여 내림차순 정렬 수행
    sort(v.begin(), v.end(), compare);
    cout << "solve 1 : ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;

    /*
    solve 2
    */
    int N;
    
    cin >> N;

    cout << "solve 2 : ";
    solve(N);

}