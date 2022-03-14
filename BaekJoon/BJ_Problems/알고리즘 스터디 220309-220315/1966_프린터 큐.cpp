#include <iostream>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main() {

	// 출력순서 출력

	int T, N, M, imp;// N: 문서 개수 , M: 순서, imp: 중요도
	cin >> T;

	for (int i = 0; i < T; i++) {
		queue <pair<int, int>> print; // 순서 중요도 . 우선순위 큐와 중요도 비교
		priority_queue <int> priority;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			cin >> imp;
			print.push(make_pair(j, imp));
			priority.push(imp); // 우선순위 순 정렬
		}
		// 우선순위 큐 이용
		
		int count = 0;
		while (!print.empty()) {
			// 찾으면 pass
			// 우선순위에 있는 중요도와 print에 있는 중요도 비교
			int loc = print.front().first; // 큐 앞 쪽에 존재하는 순서값 받아오기
			int num = print.front().second; // 비교할 중요도 담기


			if (priority.top() == num) {
				// 중요도 같을 시
				print.pop(); // 맨 앞부분 pair 제거
				priority.pop();
				count++;
				// 그 중 loc값이 M 과 같은 경우
				if(loc == M)
					cout << count << endl;
			}
			else { // 빼고 다시 큐에 넣기
				print.push(print.front());
				print.pop();
			}


		}


	}

	return 0;
}