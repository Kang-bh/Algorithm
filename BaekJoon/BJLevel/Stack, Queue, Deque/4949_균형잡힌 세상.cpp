#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <char> bracketStack;
string sentence;

char leftBracketArray[2] = {'(', '[',};
char rightBracketArray[2] = {')', ']',};

bool checkLeftBracket (char str) {
    for (char bracket : leftBracketArray) {
        if (bracket == str)
            return true;
    }
    return false;
}

bool checkRightBracket (char str) {
    for (char bracket : rightBracketArray) {
        if (bracket == str)
            return true;
    }
    return false;
}

void resetbracketStack () {
    while (!bracketStack.empty()) {
        bracketStack.pop();
    }
}

bool matchBracket (char rightBracket) {
    if (bracketStack.empty()) {
        return false;
    }

    char leftBracket = bracketStack.top();
    bracketStack.pop();

    if (rightBracket == rightBracketArray[0]) {
        if (leftBracket == leftBracketArray[0]) {
            return true;
        }
    }

    if (rightBracket == rightBracketArray[1]) {
        if (leftBracket == leftBracketArray[1]) {
            return true;
        }
    }

    return false;
}

void input () {
    getline(cin, sentence, '.');
    bool result;

    while(!sentence.empty()) {
        for (char chr : sentence) {
            if (checkLeftBracket(chr)) {
                bracketStack.push(chr);
            }

            result = false;

            if (checkRightBracket (chr)) {
                if (!matchBracket(chr)) {
                    result = true;
                    cout << "no" << endl;
                    break;
                }
            }
        }

        if (!result && bracketStack.empty()) {
            cout << "yes" << endl;
        }

        if (!result && !bracketStack.empty()) {
            cout << "no" << endl;
        }

        resetbracketStack();
        cin.ignore();
        getline(cin, sentence, '.');
    }
}

int main () {
    input();
    return 0;
}