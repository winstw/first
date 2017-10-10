#include <stdio.h>

int main(void){

int dividende, diviseur, quotient, reste = 0;
    printf("entrez le dividende : ");
    scanf("%i", &dividende);
    printf("entrez le diviseur : ");
    scanf("%i", &diviseur);
    quotient = dividende / diviseur;
    reste = dividende % diviseur;
    printf("Le quotient est %i\n", quotient);
    if(reste != 0)
        printf("Le reste est %i\n", reste);

    return 0;


}
