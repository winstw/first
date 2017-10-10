#include <stdio.h>

int main(void)

{

	int entier;
	int n;	
	printf("Entre un nombre à multiplier : ");
	scanf("%d", &entier);
	printf("Combien de fois veux tu le multiplier ? ");
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++)
		printf("%d fois %d : %d\n", entier, i, entier * i); 


	return 0;

}
