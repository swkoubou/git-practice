#include <stdio.h>
int main(void) {
	int a, b, c, d;
	for (a = 0; a < 100; ++a) {
		b = a % 3, c = a % 5, d = a % 15;
		if (b == 0) {
			printf("fizz\n");
		}
		else if (c == 0) {
			printf("buzz\n");
		}
		else if (d == 0) {
			printf("fizzbuzz\n");
		}
		else {
			printf("%d\n", a);
		}
	}
	return 0;
}
