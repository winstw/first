#include <stdio.h>
#define MAX_TOTAL 10000
#define MIN_REVENU 1000



int main(void)
{

	int total = 0;
	int revenu = 0;
	
	do
	{
		printf("Indiquez le montant total : ");
		scanf("%d", &total);
	}while (total <= 0);
	do
	{
	printf("Indiquez votre revenu mensuel : ");
	scanf("%d", &revenu);
	}while (revenu <= 0);

	if (total <= MAX_TOTAL)
		if (revenu < MIN_REVENU) printf("Vous pouvez obtenir la " 
			"prime, mais avec votre revenu, il ne sera peut "
			"etre pas simple de rembourser\n");
		else printf("Aucun probleme pour obtenir la prime!\n");
	else printf("Le cout est trop eleve pour obtenir la prime!\n");

	return 0;
}
