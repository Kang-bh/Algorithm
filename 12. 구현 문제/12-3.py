def solution(s):
    answer = 0
    #문자열 자를 단위
    check = 1
    while check <= len(s) // 2 :
        word = ''
        count = 1
        check_string = s[0:check]
        for i in range(check, len(s), check):
            if check_string == s[i:i + check]:  # 다음 것과 같을 때
                count += 1
            else:  # 다음 것과 다를 때
                if count > 1:  # 두번 이상 반복 시
                    word += str(count) + check_string
                else:
                    word += check_string
                check_string = s[i:i + check]
                count = 1
        if count > 1:  # 두번 이상 반복 시
            word += str(count) + check_string
        else:
            word += check_string
        if answer == 0 or answer > len(word):
            answer = len(word)
        check += 1
    return answer

string = input()
print(solution(string))