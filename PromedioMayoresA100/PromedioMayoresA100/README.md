# Mostrar Valores Mayores a 100 en un Array

Este programa en C++ permite al usuario ingresar 15 números en un array y luego muestra los números que son mayores a 100. Es una práctica para el uso de arrays y estructuras de control en C++.

## Propósito del Código

El programa solicita al usuario ingresar 15 números enteros en un array y luego recorre dicho array para imprimir los valores que son mayores a 100.

## ¿Qué incluye el código?

1. **Declaración del Array**
   - El programa comienza con la declaración de un array de 15 enteros llamado `array` para almacenar los valores ingresados por el usuario:
     ```cpp
     int array[15];
     ```

2. **Ingreso de Valores**
   - Se utiliza un ciclo `for` para pedir al usuario que ingrese 15 números enteros:
     ```cpp
     for(int i = 0; i < 15; i++) {
         cout << "Ingrese el valor para la posición " << i + 1 << ": ";
         cin >> array[i];
     }
     ```

3. **Mostrar Valores Mayores a 100**
   - Después de ingresar los valores, el programa recorre el array nuevamente para mostrar aquellos números que son mayores a 100:
     ```cpp
     for(int i = 0; i < 15; i++) {
         if(array[i] > 100) {
             cout << array[i] << " ";
         }
     }
     ```

4. **Salida del Resultado**
   - Finalmente, el programa imprime en la consola los valores mayores a 100, separados por un espacio:
     ```cpp
     cout << "Valores mayores a 100: ";
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Para compilar el código, usa un compilador de C++:
     ```bash
     g++ PromedioMayoresA100.cpp -o PromedioMayoresA100
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./PromedioMayoresA100
     ```

3. **Interacción con el Usuario**
   - El programa te pedirá que ingreses 15 números enteros, uno por uno. Al finalizar, mostrará los números que son mayores a 100.

   Ejemplo de ejecución:
   ```plaintext
   Ingrese el valor para la posición 1: 50
   Ingrese el valor para la posición 2: 120
   Ingrese el valor para la posición 3: 200
   ...
   Valores mayores a 100: 120 200 150
