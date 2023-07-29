#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, x;
	int N[11] = { 0 };

	scanf("%d", &n);           // 입력 값의 수

	N[1] = 1;
	N[2] = 2;
	N[3] = 4;

	for (int i = 4; i < 11; i++) {
		N[i] = N[i - 1] + N[i - 2] + N[i - 3];
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		printf("%d\n", N[x]);
	}

	return 0;
}