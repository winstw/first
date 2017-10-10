#include <stdio.h>

int main(void)
{
	int total = 1;
	int n;
	int exp;

	printf("entre un nombre entier ");
	scanf("%d", &n);

	printf("entre une puissance ");
	scanf("%d", &exp);

	printf("%d ^ %d = ", n, exp);

	while (exp > 0){
		total *= n;
		exp--;
		}

	printf("%d\n", total);
	return 0;

}
