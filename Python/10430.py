# https://www.acmicpc.net/problem/10430
a,b,c = map(int, input().split())
print(int((a + b) % c))
print(int(((a % c) + (b % c)) % c))
print(int((a * b) % c))
print(int((a % c) * (b % c)) % c)