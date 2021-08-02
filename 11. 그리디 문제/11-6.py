# food_times의 값이 0일 경우 index 다시 올리기
def check(food_times, answer):
    while food_times[answer] == 0:  # food_time 이 0이 아닐 때 까지.
        answer += 1
        if answer == len(food_times):
            answer = 0
    return answer

def solution(food_times, k):
    answer = 0
    for _ in range(k):
        # food_time이 0일 때
        food_times[answer] -= 1
        answer += 1
        if answer == len(food_times):
            answer = 0
        answer = check(food_times, answer)
    return answer

food_times = list(map(int, input().split()))
k = int(input())
print(solution(food_times, k)+1)