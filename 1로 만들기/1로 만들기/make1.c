#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int X, i = 2;
	int M[1000001] = {0};

	scanf("%d", &X);

	M[1] = 0;

	while (i <= X) {
		if (i % 3 == 0) {
			M[i] = 1 + M[i / 3];
		}
		else if ((i - 1) % 3 == 0) {
			M[i] = 2 + M[(i - 1) / 3];
		}
		else if (i % 2 == 0) {
			M[i] = 1 + M[i / 2];
		}
		i++;
	}

	printf("%d\n", M[X]);
	
	return 0;
}