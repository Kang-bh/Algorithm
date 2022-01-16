num_of_student = int(input())
# 학생 정보 입력
data = []
for _ in range(num_of_student):
    info = tuple(input().split(" "))
    int(info[1])
    data.append(info)

# 성적 낮은 순으로 정렬
def setting(info):
    return info[1] # 성적 반환하기

result = sorted(data, key=setting)
for j in range(num_of_student):
    print(result[j][0], end =" ")