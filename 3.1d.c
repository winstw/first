#include <stdio.h>

int main()
{
	int n, guess_number, sum = 0;
	
	printf("Entrez un chiffre : ");
	scanf("%d", &guess_number);

	while (guess_number != -1)
	{
		sum += guess_number;
		printf("Entrez un chiffre : "); 
		scanf("%d", &guess_number);
		
		
	}
	
	printf("Sum : %d\n", sum);
	return 0;

}
