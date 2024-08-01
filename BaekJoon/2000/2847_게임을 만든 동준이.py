
def solve(score_list):

    score_list.reverse()
    count = 0

    for idx, score in enumerate(score_list):
        if idx == len(score_list) - 1:
            break
        elif score <= score_list[idx+1]:
            diff = abs(score_list[idx+1] - score + 1)
            count += diff
            score_list[idx+1] = score_list[idx+1] - diff

    return count


if __name__ == "__main__":
    levels = int(input())
    score_list = []

    for i in range(levels):
        score = int(input())
        score_list.append(score)

    count = solve(score_list)

    print(count)
 