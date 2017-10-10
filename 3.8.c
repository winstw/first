#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int solution = rand()%101;
	int guess;
	do
	{
	printf("entrez un nombre entre 1 et 100 : ");
	scanf("%d", &guess);
	if (solution < guess) printf("trop haut, reessayer\n");
	if (solution > guess) printf("trop bas, reessayer\n");
	}while(guess != solution);
	printf("Bravo, vous avez trouvé\n");
	return 0;



}
