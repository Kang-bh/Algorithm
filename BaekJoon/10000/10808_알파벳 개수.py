
S = input()

str_dic = dict()

# 97 ~ 122
alphabet_str = "abcdefghijklmnopqrstuvwxyz"

for alpha in alphabet_str:
    str_dic[alpha] = 0

for chr in S:
    str_dic[chr] += 1


for _ in alphabet_str:
    print(str_dic[_], end=" ")