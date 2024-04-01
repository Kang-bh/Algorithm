max_result = 0
result = 0
for i in range(0, 4):
    out_p, in_p = map(int, input().split())
    result -= out_p
    result += in_p
    if max_result < result :
        max_result = result


print(max_result)