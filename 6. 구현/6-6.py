array = [7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2]

data = [0] * (max(array)+1)

for i in array:
    data[i] += 1

for i in range(len(data)):
    for _ in range(data[i]):
        print(i, end = " ")