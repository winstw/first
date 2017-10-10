#include <stdio.h>

int somme_diviseurs(int n)
{
	int somme = 0;
	for (int i=1; i <= n; i++)
		if (n % i == 0) somme += i;
	return somme;
}

int nbre_diviseurs(int n)
{
	int nombre = 0;
	for (int i=1; i <= n; i++)
		if (n % i == 0) nombre++;
	return nombre;
}

int parfait(int n)
{
	return (2 * n == somme_diviseurs(n));

}

int sublime(int n)
{
	return (parfait(somme_diviseurs(n)) && parfait(nbre_diviseurs(n)));


}

int main(void)
{
	int n = 0;
	printf("entrez un nombre\n");
	scanf("%d", &n);
	if (sublime(n))
		printf("%d est un nombre sublime\n", n);
	else printf("%d n'est pas un nombre sublime\n", n);

}
