for i in range(0, 3):
    list_num = [int(x) for x in input().split()]
    one_count = list_num.count(1)
    if one_count == 0 :
        print('D')
    elif one_count == 1 :
        print('C')
    elif one_count == 2 :
        print('B')
    elif one_count == 3 :
        print('A')
    elif one_count == 4 :
        print('E')