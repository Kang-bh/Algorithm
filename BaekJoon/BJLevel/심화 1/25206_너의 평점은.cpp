#include <iostream>
#include <string>
using namespace std;

double total_score = 0;
double total_credit = 0;

// 선 if 후 switch 처리
double convertGradeToScore (double credit, string grade) {
    if (grade == "A+") {
        return 4.5 * credit;
    } else if (grade == "A0") {
        return 4.0 * credit;
    } else if (grade == "B+") {
        return 3.5 * credit;
    } else if (grade == "B0") {
        return 3.0 * credit;
    } else if (grade == "C+") {
        return 2.5 * credit;
    } else if (grade == "C0") {
        return 2.0 * credit;
    } else if (grade == "D+") {
        return 1.5 * credit;
    } else if (grade == "D0") {
        return 1.0 * credit;
    }
    return 0.0 * credit;
}

int main() {
    cout << fixed;
    cout.precision(6);

    string className;
    double credit;
    string grade;

    for (int i = 0; i < 20; i++) {
        cin >> className >> credit >> grade;
        if (grade == "P") {
            continue;
        }
        total_score += convertGradeToScore(credit, grade);
        total_credit += credit;
    }

    cout << total_score/total_credit << endl;

    return 0;
}