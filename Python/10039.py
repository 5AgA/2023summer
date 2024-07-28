# https://www.acmicpc.net/problem/10039

sum = 0
for i in range(5):
    score = int(input())
    if 100 >= score >= 40:
        sum += score
    else : 
        sum += 40
avg = int(sum / 5)
print(avg)