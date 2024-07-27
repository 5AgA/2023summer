# https://www.acmicpc.net/problem/7120

ret = ""
str = input()
len = len(str)
for i in range(len - 1):
    if str[i] != str[i + 1]:
        ret += str[i]
ret += str[len - 1]
print(ret)