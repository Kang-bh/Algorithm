#include <iostream>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main() {

	// ��¼��� ���

	int T, N, M, imp;// N: ���� ���� , M: ����, imp: �߿䵵
	cin >> T;

	for (int i = 0; i < T; i++) {
		queue <pair<int, int>> print; // ���� �߿䵵 . �켱���� ť�� �߿䵵 ��
		priority_queue <int> priority;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			cin >> imp;
			print.push(make_pair(j, imp));
			priority.push(imp); // �켱���� �� ����
		}
		// �켱���� ť �̿�
		
		int count = 0;
		while (!print.empty()) {
			// ã���� pass
			// �켱������ �ִ� �߿䵵�� print�� �ִ� �߿䵵 ��
			int loc = print.front().first; // ť �� �ʿ� �����ϴ� ������ �޾ƿ���
			int num = print.front().second; // ���� �߿䵵 ���


			if (priority.top() == num) {
				// �߿䵵 ���� ��
				print.pop(); // �� �պκ� pair ����
				priority.pop();
				count++;
				// �� �� loc���� M �� ���� ���
				if(loc == M)
					cout << count << endl;
			}
			else { // ���� �ٽ� ť�� �ֱ�
				print.push(print.front());
				print.pop();
			}


		}


	}

	return 0;
}