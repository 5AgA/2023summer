// º≥≈¡ πË¥ﬁ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	
	scanf("%d", &N);
	if (N < 3 || N > 5000) return 0;

	while (1) {
		if (N % 5 == 0) {
			cnt += N / 5;
			N %= 5;
			break;
		}
		cnt++;
		N -= 3;
		if (N <= 0) break;
	}

	if (N == 0) printf("%d\n", cnt);
	else printf("-1\n");

	return 0;
}