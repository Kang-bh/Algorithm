import sys
import time
start = time.time()
# 하나의 문자열 데이터 입력받기
input_data = sys.stdin.readline().rstrip()
# 입력받은 문자열 그대로 출력
print(input_data, "time : ", time.time()-start)
# input 사용시 8.888
# readline 이용 8.16

