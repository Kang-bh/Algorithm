from collections import deque

queue = deque()
string = list(input())
number = 0
string.sort()
for i in range(len(string)):
    if ord(string[i]) < 64: # 문자열 1 2 3 인 경우
        number += int(string[i])
    else:
        string = string[i:]
        string.append(str(number))
        break;

for data in string:
    print(data, end='')