#include <iostream>
#include <string>
using namespace std;

int answer = 0;
int check = 0;
int setMaxRangeNumber(int N) {
    return N * 3600;
}

bool checkIncludingThree(string &str) {
    if(str.find('3') != string::npos) {
        return true;
    }
    return false;
}

void solve(int N) {
    int maxRangeNumber = setMaxRangeNumber(N+1);
    for (int i = 0; i < maxRangeNumber; i++) {
        int minuteTimesSecond = i % 3600;
        string hour = to_string((i / 3600));
    
        if (checkIncludingThree(hour)) {
            answer++;
            continue;
        }

        string minutes = to_string(minuteTimesSecond/60);
        if (checkIncludingThree(minutes)) { // check hours
            answer++;
            continue;
        }
        
        string seconds = to_string(minuteTimesSecond%60);
        if (checkIncludingThree(seconds)) {
            answer++;
        }
    }
}

int main() {

    int N;
    cin >> N;

    solve(N);

    cout << answer << endl;

    return 0;
}