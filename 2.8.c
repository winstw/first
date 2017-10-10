#include <stdio.h>

int main(void) {

    int jours, heures, minutes, secondes, total = 0;
    printf("Inscrivez une durée en jours, heures, minutes, secondes ");
    printf("\nséparés par des espaces : ");
    scanf("%i %i %i %i", &jours, &heures, &minutes, &secondes);
    total = secondes + minutes * 60 + heures * 3600 + jours * 3600 * 24;
    printf("Total en secondes : %i\n", total);
    return 0;
}
