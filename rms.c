#include <stdio.h>
int main(void) {
	int i = 1;

	while (i <= 100) {
		printf("%d", i);

		if (i % 15 == 0) {
			printf("fizzbuzz");
		}
		else if (i % 3 == 0) {
			printf("fizz");
		}
		else if (i % 5 == 0) {
			printf("buzz");
		}
		printf("\n");
		i++;
	}
	return 0;
}