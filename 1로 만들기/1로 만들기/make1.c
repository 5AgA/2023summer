#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int X;
	int M[1000001] = {0};

	scanf("%d", &X);

	M[1] = 0;

	for (int i = 2; i <= X; i++) {
		M[i] = M[i - 1] + 1;
		if (i % 3 == 0) {
			if (M[i] > M[i / 3] + 1)
				M[i] = M[i / 3] + 1;
		}
		if (i % 2 == 0) {
			if (M[i] > M[i / 2] + 1)
				M[i] = M[i / 2] + 1;
		}
	}

	printf("%d\n", M[X]);
	
	return 0;
}