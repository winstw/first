#include <stdio.h>

int main()
{
	int n, guess_number, i, sum = 0;
	do
	{
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	} while(n <= 0);	

	i = 0;
	while (i < n)
	{
		printf("Entrez un chiffre : "); 
		scanf("%d", &guess_number);
		sum += guess_number;
		i++;
	}
	
	printf("Sum : %d\n", sum);
	return 0;

}
