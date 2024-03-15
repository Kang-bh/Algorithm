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

void solve2(int N) {
    
    int cnt = 0;
    string time_format;
    for(int hour = 0; hour < N + 1; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            for (int second = 0; second < 60; second++) {
                time_format = to_string(hour) + to_string(minute) + to_string(second);
                if (time_format.find('3') != string::npos) {
                    cnt++;
                }
            }
        }
    }
    // solve 1 : 시간 제한 2초이기에 셀 수 있도록

    // solve 2 : 개수 세기
    // N = 3, 13 => 3600개
    // 분 3, 13, 23, 30~39, 43, 53 -> 15개
    // 나머지 : 분당 15개
    cout << cnt << endl;

}


int main() {

    int N;
    cin >> N;

    solve(N);

    cout << "solve 1 : " << answer << endl;

    cout << "solve 2 : "
    solve2(N) << endl;

    return 0;
}