# https://www.acmicpc.net/problem/7120

ret = ""
str = input()
len = len(str)

# 문자가 다른 것이 나오는 순간 해당 문자를 저장
for i in range(len - 1):
    if str[i] != str[i + 1]:
        ret += str[i]
        
ret += str[len - 1]

print(ret)