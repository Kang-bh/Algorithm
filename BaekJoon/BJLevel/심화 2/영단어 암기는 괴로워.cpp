#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map <string, int> words;

// compare 이 시간 복잡도에 관련될 수 있는 이유 찾기
bool compare(const pair<string, int> &firstWord, const pair<string, int> &secondWord) {
    if (firstWord.second == secondWord.second) {
        if (firstWord.first.length() == secondWord.first.length()) {
            return firstWord.first <  secondWord.first;
        }
        return firstWord.first.length() > secondWord.first.length();
    } 
    return firstWord.second > secondWord.second;
}


void input(const int &wordCount, const int &wordLength) {
    string word;

    for (int i = 0; i < wordCount; i++) {
        cin >> word;

        if (wordLength > word.length()) {
            continue;    
        }

        words[word]++;
    }
}

void solve() {
    vector<pair<string, int>> sortingArray(words.begin(), words.end());
    sort(sortingArray.begin(), sortingArray.end(), compare);

    for (auto& data : sortingArray) {
        cout << data.first << "\n";
    }
}

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);


    int wordCount, wordLength;

    cin >> wordCount >> wordLength;

    input(wordCount, wordLength);

    solve();

    return 0;
}