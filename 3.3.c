#include <stdio.h>

int main(void)

{

	int entier;
		
	printf("Entre un nombre entier : ");
	scanf("%d", &entier);
	
	for (int i = 1; i < 10; i++)
		printf("%d fois %d : %d\n", entier, i, entier * i); 


	return 0;

}
