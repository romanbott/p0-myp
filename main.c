#include <stdbool.h>
#include <stdio.h>

#define NUM_CALIFICACIONES 3

void mostrar_resultado(char nombre[], float promedio, bool aprobado) {
  printf("Estudiante: %s\n", nombre);
  printf("Promedio:   %.2f\n", promedio);
  printf("Estado:     %s\n", aprobado ? "APROBADO" : "REPROBADO");
}

float calcular_promedio(float calificaciones[], size_t cantidad) {
  float suma = 0.0f;
  for (size_t i = 0; i < cantidad; i++) {
    suma += calificaciones[i];
  }
  return suma / cantidad;
}

bool esta_aprobado(float promedio) {
    return promedio >= 6.0f;
}

int main(void) {
  float calificaciones[NUM_CALIFICACIONES] = {7.0, 9.0, 0.0};

  float promedio = calcular_promedio(calificaciones, NUM_CALIFICACIONES);

  mostrar_resultado("Juan Rulfo", promedio, esta_aprobado(promedio));

  return 0;
}
