N = int(input())

number_list = list(map(int, input().split()))

count = 0

def solve():

    number_list.sort()
    
    while len(number_list) != 0 :
        max = number_list[-1]

        for i in range(max):
            number_list.pop()
        
        count+=1

    print(count)