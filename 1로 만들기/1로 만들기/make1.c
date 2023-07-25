#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int X, cnt = 0;

	scanf("%d", &X);

	while (X != 1) {
		if (X % 3 == 0) {
			X /= 3;
			//printf("%d\n", X);
			cnt++;
			continue;
		}
		if ((X - 1) % 3 == 0) {
			X--;
			//printf("%d\n", X);
			cnt++;
			continue;
		}
		if (X % 2 == 0) {
			X /= 2;
			//printf("%d\n", X);
			cnt++;
			continue;
		}
		X--;
		//printf("%d\n", X);
	}


	printf("%d\n", cnt);

	return 0;
}