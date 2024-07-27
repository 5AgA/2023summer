# https://www.acmicpc.net/problem/2480

# 배열에 각각의 주사위 눈 입력
dice = list(map(int, input().split()))
same = 0

# 주사위 눈에서 중복인 눈 찾기
for i in range(len(dice) - 1):
    if dice[i] in dice[i+1:]:
        same = dice[i]
        break;

# 중복 개수 찾기        
eq = len(dice) - len(set(dice)) + 1

if eq != 0:
    print((10 ** eq) * (10 + same))
else:
    dice.sort()
    print(dice[2] * 100)
        