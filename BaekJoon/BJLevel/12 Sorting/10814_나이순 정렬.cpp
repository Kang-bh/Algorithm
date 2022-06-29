#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Member {
	int age; // 나이
	int seq; // 가입 순서
	string name; // 이름
} member[100000];

bool compare(const Member& m1, const Member& m2) {
	if (m1.age == m2.age) {
		return m1.seq < m2.seq;
	}
	else
		return m1.age < m2.age;
}

void Input(int N){
	int age, seq = 0;;
	string name;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		seq++;
		member[i] = { age, seq, name };
	}
}

void Print(int N) {
	for (int i = 0; i < N; i++) {
		cout << member[i].age << " " << member[i].name << "\n";
	}
}

int main() {

	int N;
	cin >> N;

	Input(N);
	sort(member, member + N, compare);
	Print(N);

	return 0;
}