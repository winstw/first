#include <stdio.h>

int main(void)
{
	int nombre_entre = 0;
	float somme = 0;
	int nbre_entrees = 0;
	
	printf("Entrez un nombre + à ajouter à la moyenne, -1 termine : ");
	scanf("%d", &nombre_entre);
	
	while (nombre_entre >= 0)
	{
		somme += nombre_entre;
		nbre_entrees ++;
		printf("Entre un nombre + pour ajouter, - termine : ");
		scanf("%d", &nombre_entre);
	}
	printf("La moyenne des %d nombres entres est de : %.2f\n", 
nbre_entrees, 
somme/nbre_entrees);
	return 0;



}
