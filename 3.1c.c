#include <stdio.h>

int main()
{
	int n, guess_number, i, sum = 0;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	i = 0;
	while (n > 0)
	{
		printf("Entrez un chiffre : "); 
		scanf("%d", &guess_number);
		sum += guess_number;
		n--;
	}
	
	printf("Sum : %d\n", sum);
	return 0;

}
