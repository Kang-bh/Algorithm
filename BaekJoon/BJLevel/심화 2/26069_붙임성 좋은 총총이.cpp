#include <iostream>
#include <string>
#include <map>
using namespace std;

int answer = 0;
map <string, bool> mapper;

bool checkKeyValueInMap(string name) { // 무지개춤 추는지 확인
    if (mapper.find(name) != mapper.end()) {
        return true;
    }
    return false;
}

void setKeyValueInMap(string name) {
    mapper.insert({name, true});
    answer++;
}

void solve(int count) {
    string firstName;
    string secondName;

    for (int i = 0; i < count; i++) {
        cin >> firstName >> secondName;

        if (checkKeyValueInMap(firstName) && !checkKeyValueInMap(secondName)) {
            setKeyValueInMap(secondName);
        } else if (checkKeyValueInMap(secondName) && !checkKeyValueInMap(firstName)) {
            setKeyValueInMap(firstName);
        }
    }
}

int main() {
    setKeyValueInMap("ChongChong");

    int count;
    cin >> count;
    solve(count);
    cout << answer << endl;

    return 0;
}