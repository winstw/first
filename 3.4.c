#include <stdio.h>

int main(void)
{
	int somme = 0;
	int n;

	printf("entre un nombre entier ");
	scanf("%d", &n);
	printf("somme de 0 à %d = ", n);
	while (n >= 0){
		somme += n;
		n--;
		}
	printf("%d\n", somme);
	return 0;

}
