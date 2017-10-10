#include <stdio.h>
#define OR 1.61803398875

int main(void) {
    float largeur = 0;
    printf("Largeur du rectangle : ");
    scanf("%f", &largeur);
    printf("Longueur = %.2f\n", largeur * OR);
    return 0;
}
