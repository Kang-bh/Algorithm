#include <iostream>
#include <vector>
using namespace std;

void solve (vector<int>& array, int begin, int mid, int end) {
    vector<int> temp;
    for (int i = mid; i <= end; i++) {
        temp.push_back(array[i]);
    }
    for (int i = begin; i < mid; i++) {
        temp.push_back(array[i]);
    }

    for (int i = end; i > begin - 1; i--) {
        array[i] = temp.back();
        temp.pop_back();
    }

}

int main() {

    int N, M;
    int begin, mid, end;

    cin >> N >> M;

    vector<int> array(N);

    for(int i = 0; i < N; i++) {
        array[i] = i+1;
    }

    for (int i = 0; i < M; i++) {
        cin >> begin >> end >> mid;
        solve(array, begin-1, mid-1, end-1);
    }

    for (vector<int>::iterator it = array.begin(); it != array.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}