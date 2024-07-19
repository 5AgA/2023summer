# https://www.acmicpc.net/problem/2480

dice = list(map(int, input().split()))
same = 0

for i in range(len(dice) - 1):
    if dice[i] in dice[i+1:]:
        same = dice[i]
        break;
        
eq = len(dice) - len(set(dice)) + 1

if eq != 0:
    print((10 ** eq) * (10 + same))
else:
    dice.sort()
    print(dice[2] * 100)
        