#include <iostream>

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

    bool operator <(Student &other) {
        return this->score < other.score; 
    }
};

int n;
vector<Student> v;

int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(Student(name, score));
    }
    
    sort(v.begin(), v.end());

    // 정렬이 수행된 결과를 출력
    for(int i = 0; i < n; i++) {
        cout << v[i].name << ' ';
    }
}