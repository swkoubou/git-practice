#include<stdio.h>

int main(void) {
	int a, b, c;
	b = 0;
	c = 0;
	while (c !=101) {
		if (c % 15 == 0)
			printf("%dfizzbuzz\n",c);
		else 
			if (c % 3 == 0)
			printf("%dfizz\n", c);
			else 
				if (c % 5 == 0)
				printf("%dbuzz\n", c);
				else printf("%d\n", c);
		c++;
	}

	return 0;
}
