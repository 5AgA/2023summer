# https://www.acmicpc.net/problem/10988

# 문자열 입력 받기
str = input()
l = len(str)
is_palindrome = 1

# Palindrome 판별
for i in range(int(l / 2)):
    if str[i] != str[l - i - 1]:
        is_palindrome = 0
        break

print(is_palindrome)