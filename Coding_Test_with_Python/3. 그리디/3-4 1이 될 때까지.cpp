#include <iostream>
using namespace std;

void solve(int &N, int K) {

    int cnt = 0;

    while (N != 1) {
        if (N % K == 0) {
            N /= K;
        } else {
            N--;
        }

        cnt++;
    }

    cout << cnt << endl;

}

// todo : N < K 경우 빼먹었으니 복습.
void solve2(int &N, int K) {
    int cnt = 0, reduce_number;
    while (N != 1) {
        if (N % K == 0 && N > K) {
            N /= K;
            cnt++;
        } else if (N < K) {
          break;  
        } else {
            // solve1 보다 효율적으로 한꺼번에 빼는 로직
            reduce_number = N % K;
            N -= reduce_number;
            cnt += reduce_number;
        }
    }

    cnt += (N-1);

    cout << cnt << endl;

}

int main() {
    
    int N, K;

    cin >> N >> K;

    // solve(N, K);
    
    solve2(N, K);

    return 0;
}