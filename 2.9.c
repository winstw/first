#include <stdio.h>

int main(void) {

    float dim1, dim2, dim3 = 0;
    printf("Entrez trois dimensions correspondant à un triangle : ");
    scanf("%f %f %f", &dim1, &dim2, &dim3);
    if (dim1 != 0 && dim2 != 0 && dim3 != 0) {
        if (dim1 == dim2 && dim2 == dim3)
           printf("triangle equilateral\n");
        else if (dim1 == dim2 || dim2 == dim3)
           printf("triangle isocèle\n");
        else printf("triangle scalène\n");
        }
    else printf("Un triangle doit comporter trois côtés non-nuls!\n");
    return 0;
}
