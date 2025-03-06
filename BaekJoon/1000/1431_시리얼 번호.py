from functools import cmp_to_key

def sum_in_serial(serial:str):
    result = 0
    for data in serial:
        if data in num_list:
            result += int(data)
    
    return result
    
N = int(input())


sorted
serial_list = list()
num_list = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

for i in range(N):
    serial = input()
    serial_list.append((len(serial), sum_in_serial(serial), serial))


serial_list.sort(key = lambda x : (x[0], x[1], x[2]))


for data in serial_list:
    print(data[2])

