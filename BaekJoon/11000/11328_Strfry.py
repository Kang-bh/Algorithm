N = int(input())

for i in range(N):
    str1, str2 = map(str, input().split(" "))

    str1_list = list(str1)
    str2_list = list(str2)

    result = True

    str1_list.sort()
    str2_list.sort()
    
    if len(str1_list) != len(str2_list):
        print("Impossible")
        continue

    for i in range(len(str1_list)):
        if str1_list[i] != str2_list[i]:
            print("Impossible")
            break
        
        if len(str1_list)-1 == i:
            print("Possible")