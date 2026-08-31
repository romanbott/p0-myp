#include <stdio.h>
#include <stdbool.h>


void mostrar_resultado(char nombre[], float promedio, bool aprobado) {
    printf("Estudiante: %s\n", nombre);
    printf("Promedio:   %.2f\n", promedio);
    printf("Estado:     %s\n", aprobado ? "APROBADO" : "REPROBADO");
}



int main(void) {
    mostrar_resultado("Juan Rulfo", 8.5, true);

    return 0;
}
