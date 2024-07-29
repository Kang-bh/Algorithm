
def find_continuous (S :str):
    one_num = 0
    zero_num = 0

    if S[0] == '0':
        flag = False
        zero_num += 1
    else:
        flag = True
        one_num += 1

    for ele in S:
        if ele == '0':
            if flag:
                flag = False
                zero_num += 1
            else:
                pass
        elif ele == '1':
            if flag:
                pass
            else :
                flag = True
                one_num += 1
    
    return zero_num, one_num

def solve(zero_num, one_num):
    if zero_num == 0 or one_num == 0:
        print(0)
    else:
        print(one_num if one_num <= zero_num else zero_num)
    

if __name__ == "__main__":
    S = input()
    
    zero, one = find_continuous(S)

    solve(zero, one)

