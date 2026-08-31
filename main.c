#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LONGITUD_NOMBRE 30

#define NUM_CALIFICACIONES 3
#define LONGITUD_CALIF 10

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

bool esta_aprobado(float promedio) { return promedio >= 6.0f; }

static void leer_nombre(char *destino, size_t tamano) {
  printf("Ingrese el nombre del estudiante: ");
  if (fgets(destino, tamano, stdin) != NULL) {
    size_t len = strlen(destino);
    if (len > 0 && destino[len - 1] == '\n') {
      destino[len - 1] = '\0';
    }
  }
}

static float leer_calificacion(size_t indice) {
  char buffer[LONGITUD_CALIF];
  float valor;

  while (true) {
    printf("Ingrese la calificación número %zu: ", indice + 1);
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
      if (sscanf(buffer, "%f", &valor) == 1 && valor >= 0.0f &&
          valor <= 10.0f) {
        return valor;
      }
    }
    printf(" Error: Ingrese un valor numérico válido entre 0 y 10.\n");
  }
}

int main(void) {
  char nombre[LONGITUD_NOMBRE];

  leer_nombre(nombre, sizeof(nombre));

  float calificaciones[NUM_CALIFICACIONES];

  for (size_t i = 0; i < NUM_CALIFICACIONES; i++) {
    calificaciones[i] = leer_calificacion(i);
  }

  float promedio = calcular_promedio(calificaciones, NUM_CALIFICACIONES);

  mostrar_resultado(nombre, promedio, esta_aprobado(promedio));

  return 0;
}
