#include <stdio.h>

int main () {
    int inicio, final, incremento;
    printf("Ingrese el numero de inicio: ");
    scanf("%d", &inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &final);

    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);
    printf("Los numeros son: \n");
    for (int i = inicio; i <= final; i += incremento) {
        printf("%d\n", i);
    }
    return 0;
}