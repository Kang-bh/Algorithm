

def solve(length:int, data_list:list):

    total_num = 0
    if sorted(data_list, reverse=True) == data_list:
        print(total_num)
        return
    
    max_num = max(data_list)
    start_index = 0
    max_num_index = data_list.index(max_num)

    while True:
        for data in data_list[start_index:max_num_index+1]:
            total_num += (max_num - data)
        start_index = max_num_index+1
        
        if start_index == length:
            break

        max_num = max(data_list[start_index:])
        max_num_index = start_index + data_list[start_index:].index(max_num)
    
    print(total_num)

if __name__ == "__main__":
    T = int(input())

    for i in range(T):
        num = int(input())
        data_list = list(map(int, input().split()))
        solve(num, data_list)
