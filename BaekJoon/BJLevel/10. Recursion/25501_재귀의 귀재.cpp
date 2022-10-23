//#include <string>
//#include <iostream>
//using namespace std;
//
//
//
//int recursion(string s, int l, int r, int &count) {
//    count++;
//    if (l >= r) return 1;
//    else if (s[l] != s[r]) return 0;
//    else return recursion(s, l + 1, r - 1, count);
//}
//
//int isPalindrome(string s, int &count) {
//    return recursion(s, 0, s.length() - 1, count);
//}
//
//int main() {
//    int T;
//    int count;
//    string str;
//
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        count = 0;
//        cin >> str;
//        int res = isPalindrome(str, count);
//        cout << res << " " << count << "\n";
//    }
//}
#include <stdio.h>
#include <string.h>

int count = 0;

int recursion(const char* s, int l, int r, int &count) {
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, count);
}

int isPalindrome(const char* s, int &count) {
    return recursion(s, 0, strlen(s) - 1, count);
}

int main() {
    int T;
    scanf("%d", &T);
    char str[1001];

    for (int i = 0; i < T; i++) {
        scanf("%s", str, 1001);
        int num = isPalindrome(str, count);
        printf("%d %d\n", num, count);

        count = 0;
    }
}