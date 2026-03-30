#include <stdio.h>

int main() {
    int inicio, fin, incremento, i;

    printf("Ingrese numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese numero final: ");
    scanf("%d", &fin);

    printf("Ingrese incremento: ");
    scanf("%d", &incremento);

    for(i = inicio; i <= fin; i = i + incremento){
        printf("%d\n", i);
    }

    return 0;
}
