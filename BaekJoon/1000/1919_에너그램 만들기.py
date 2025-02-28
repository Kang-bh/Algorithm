from pprint import pprint as pp

'''
Function List
'''
def checkInDictionary(key:chr, data:dict):
    if key in data.keys():
        return True
    return False

str1 = input()
str2 = input()

str1_list = list(str1)
str2_list = list(str2)

# dict로 key 별 생성하기

str1_dict = dict()
str2_dict = dict()

for data in str1_list:
    if checkInDictionary(data, str1_dict):
        str1_dict[data] += 1
    else:
        str1_dict[data] = 1

for data in str2_list:
    if checkInDictionary(data, str2_dict):
        str2_dict[data] += 1
    else:
        str2_dict[data] = 1

result = 0
exist_key_list = list()

# 중복x key값의 value만큼 result up
for key in str1_dict:
    if key in str2_dict: # str1_dict에만 있는 경우
        exist_key_list.append(key)
        result += abs(str1_dict[key] - str2_dict[key])
    else: # 중복 key
        result += str1_dict[key]

for key in str2_dict:
    if not key in exist_key_list:
        result += str2_dict[key]


print(result)

# 중복o key값들의 value 차만큼 result up

