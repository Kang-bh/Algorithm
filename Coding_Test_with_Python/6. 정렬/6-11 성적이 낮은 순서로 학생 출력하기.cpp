#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

// DTO
class Student {
public:
    string name;
    int score;
    Student(string name, int score) {
        this->name = name;
        this->score = score;
    }

    bool operator <(const Student &other) const {
        return this->score < other.score; 
    }
};

int n;
vector<Student> v;
vector<pair<string, int>> students;

bool compare(pair<string, int> a, pair<string, int> b) {
    // 오름 차순일 경우 a 가 b 보다 작다는 것을 true로 처리
    // 여기서 a 는 이전 index b는 다음 index


    /* 
    Develop with addtional condition 
    condition : If score is same, sort by name in ascending order
    */
   
    if (a.second == b.second) { // additinal code
        return a.first < b.first;
    }

    return a.second < b.second; // origin code
    
}

void solve(int N) {
    string name;
    int score;
    for (int i = 0; i < N; i++) {
        cin >> name >> score;
        students.push_back(make_pair(name, score));
    }

    sort(students.begin(), students.end(), compare);

    cout << "solve 2 : ";
    for (auto student : students) {
        cout << student.first << " ";
    }
    cout << endl;
}


int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(Student(name, score));
    }
    
    sort(v.begin(), v.end());

    cout << "solve 1 : ";
    // 정렬이 수행된 결과를 출력
    for(int i = 0; i < n; i++) {
        cout << v[i].name << ' ';
    }
    cout << endl;

    cout << "enter data for solve 2 " << endl;
    solve(n);
}
