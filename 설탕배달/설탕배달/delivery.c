// 설탕 배달
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(int* item, int N, int k, int cnt, int* min)  // min: 최소 개수, k: 남은 무게
{
	int i;

	if (k < 0) {
		return;
	}

	if (k == 0) {
		if (cnt < *min)
			*min = cnt;
		return;
	}

	for (i = 0; i < 2; i++) {
		pick(item, N, k - item[i], cnt + 1, min);
	}
}

int main(void)
{
	int N, min;
	int item[2] = {5, 3};


	scanf("%d", &N); // N 킬로그램 입력 받기
	if (N < 3 || N > 5000) {
		printf("-1\n"); 
		return 0;
	}
	min = N / 3 + 1;

	pick(item, N, N, 0, &min);
	if (min == N / 3 + 1) printf("-1\n");
	else printf("%d\n", min);

	return 0;
}