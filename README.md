# Práctica 0 - Modelado y programación

## Preguntas

1. ¿Qué significa programar de forma estructurada?
  Se refiere a implementar un programa que solucione un problema dado utilizando las herramientas y convenciones del paradigma estructurado.
  Es decir, específicar qué pasos se deben seguir para resolver el problema utilizando únicamente las tres estructuras fundamentales de control y promoviendo la modularidad del código por medio del uso de funciones.

  Se trata de evitar la creación de programas monolíticos donde todo el código modifica el estado global del programa. También se busca evitar el uso de saltos arbitrarios (`goto`).


2. ¿Cuáles son las tres estructuras fundamentales de control?

  Secuencia, selección e iteración.


3. ¿Qué ventaja tuvo separar el programa en funciones?

  Permite delimitar claramente qué parte del código se encarga de qué cosa, lo que lo hace más legible, modular y facilita su revisión. Además permite que en un futuro se reutilicen dichas funciones.

4. ¿Qué función tendría que modificarse si la calificación mínima aprobatoria cambiara?

  Bastaría modificar la función `esta_aprobado`.

5. ¿Qué diferencia conceptual observa entre una función y un método?

  Una función por lo general forma parte del entorno global, y puede ser llamada en cualquier párte del código, operando sobre cuaquier valor siempre y cuando sean del tipo correcto.

  En cambio un método forma parte del entorno asociado a un tipo de dato (clase), y por lo general recibirá como primer argumento un objeto de dicho tipo.

  Semánticamente, un método es una operación que se puede aplicar unicamente a objetos de un tipo y su utilidad principal es modificar el estado de dicho objeto, mientras que una función es de caracter más general.


6. ¿Qué representa un commit en Git?

  Representa una unidad de cambio y una _fotografía_ del estado del código en un punto del tiempo.
  Guarda los cambios realizados al proyecto junto con metadatos como: autor, fecha, mensaje y un identificador único.

7. ¿Por qué es preferible realizar varios commits pequeños en lugar de un solo commit al final?

  Por que mejora la legibilidad, permite asociar mensajes descriptivos a cada _commit_, lo que posibilita hacer un análisis más fino si en un futuro se presentan errores o cosas que se deban cambiar.

  Otra ventaja es que resolver _merge conflicts_ en general es más fácil cuando se trata de _commits_ pequeños.
