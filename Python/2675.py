# https://www.acmicpc.net/problem/2675

# 입력받은 숫자만큼 배열의 크기 설정
T = int(input())
O = ["" for i in range(T)]

# 결과 배열에 각 문자들을 반복하여 저장
for i in range(T):
    R, S = input().split()
    R = int(R)
    for j in S:
        for k in range(R):
            O[i] += j
            
for i in range(T):
    print(O[i])
    