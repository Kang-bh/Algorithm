#include <iostream>
#include <string>
#include <map>
using namespace std;

int answer = 0;
map<string, bool> mapper;

bool searchKeyValueInMap (string name) {
    if (mapper.find(name) != mapper.end()) {
        return true;
    }
    return false;
}

void setKeyValueInMap (string name) {
    mapper.insert({name, true});
}

void initMapper () {
    mapper.erase(mapper.begin(), mapper.end());
}

void solve(int count) {

    string name;

    for (int i = 0; i < count; i++) {
        cin >> name;
        if (name == "ENTER") {
            initMapper();
            continue;
        }

        if (searchKeyValueInMap(name)) {
            continue;
        }

        setKeyValueInMap(name);
        answer++;
    }
}

int main() {

    int count;
    cin >> count;
    solve(count);
    cout << answer << endl;

    return 0;
}