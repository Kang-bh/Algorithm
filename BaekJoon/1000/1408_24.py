current_time = input()
start_time = input()


def time2second (time : str) -> int:
    second = int(time[0:2]) * 3600 + int(time[3:5]) * 60 + int(time[6:])
    return second

def second2timeformat(second : int) -> str:
    hours = int(second/3600)
    remain = second%3600
    minutes = int(remain/60)
    remain = remain%60
    return ("{0}:{1}:{2}".format(int2str(hours), int2str(minutes), int2str(remain)))

def int2str(time : int) -> str:
    if time < 10 :
        return '0' + str(time)
    return str(time)

def solve():
    current_time2second = time2second(current_time)
    start_time2second = time2second(start_time)

    if (start_time2second < current_time2second) :
        start_time2second += 86400

    remain_second = second2timeformat(start_time2second - current_time2second)
    print(remain_second)

solve()