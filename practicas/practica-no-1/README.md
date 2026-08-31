<div align="center">
  
<table>
  <tr>
    <td width="75%" align="center">
      <h2>UNIVERSIDAD DE ANTIOQUIA</h2>
      <h3>Departamento de Ingeniería Electrónica y Telecomunicaciones</h3>
      <h2>INFORMÁTICA II</h2>
      <h3>Práctica No. 1</h3>
    </td>
    <td width="25%" align="center">
      <img src="../../assets/Logoudea-vertical.jpg" alt="Logo Universidad de Antioquia" width="200">
    </td>
  </tr>
</table>

</div>

---

## 1. Objetivos

- Afianzar el manejo del IDE (*Integrated Development Environment*) **Qt Creator**, que se empleará para desarrollar las prácticas de laboratorio en C++.
- Mejorar las habilidades de **depuración**.
- Afianzar el manejo del asistente de depuración del IDE **Qt Creator**.
- Afianzar el manejo del lenguaje **C++**.
- Conocer la estructura de un programa.
- Manipular diferentes tipos de datos.
- Afianzar el manejo de las estructuras de control.
- Desarrollar habilidades algorítmicas.

---

<details>
<summary><h2>2. Ejercicios</h2></summary>

### Ejercicio 1.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla el residuo de la división **A/B**.
**Ejemplo:** si se ingresan `8` y `3`, se debe imprimir:

```text
El residuo de la division 8/3 es: 2
```

**Nota:** Nótese que la palabra division no tiene tilde. Esto no es un error tipográfico, sino que se debe a que no se pueden imprimir correctamente las tildes en la terminal. De ahora en adelante, todos los ejemplos de salida contendrán el mismo error tipográfico.

**Solución** 
[Ver solución 1](./ejercicios/problema1/main.cpp)

---

### Ejercicio 2.

Escriba un programa que pida un número **N** e imprima en pantalla si es par o impar.
**Ejemplo:** si se ingresa `5`, se debe imprimir:

```text
5 es impar
```
**Solución** 
[Ver solución 2](./ejercicios/ejercicio2/main.cpp)

---
### Ejercicio 3.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla el mayor.
**Ejemplo:** si se ingresan `7` y `3`, se debe imprimir:

```text
El mayor es 7
```
**Solución** 
[Ver solución 3](./ejercicios/ejercicio3/main.cpp)

---
### Ejercicio 4.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla el menor.
**Ejemplo:** si se ingresan `7` y `3`, se debe imprimir:

```text
El menor es 3
```
**Solución** 
[Ver solución 4](./ejercicios/ejercicio4/main.cpp)

---
### Ejercicio 5.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla la división **A/B** con redondeo.
**Ejemplo:** si se ingresan `8` y `3`, se debe imprimir:

```text
8/3=3
```

Si se ingresan `7` y `3`, se debe imprimir:

```text
7/3=2
```
**Solución** 
[Ver solución 5](./ejercicios/ejercicio5/main.cpp)

---
### Ejercicio 6.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla la potencia **A^B**, sin hacer uso de librerías matemáticas.
**Ejemplo:** si se ingresan `5` y `3`, se debe imprimir:

```text
5^3=125
```
**Solución** 
[Ver solución 6](./ejercicios/ejercicio6/main.cpp)

---
### Ejercicio 7.

Escriba un programa que pida un número **N** e imprima en pantalla la suma de todos los números entre `0` y **N** (incluyéndose el mismo).
**Ejemplo:** si se ingresa `5`:

```text
1+2+3+4+5=15
```

por lo que se debe imprimir:

```text
La sumatoria desde 0 hasta 5 es: 15
```
**Solución** 
[Ver solución 7](./ejercicios/ejercicio7/main.cpp)

---
### Ejercicio 8.

Escriba un programa que pida un número **N** e imprima en pantalla su factorial.
**Ejemplo:** si se ingresa `5`:

```text
5!=1*2*3*4*5=120
```
por lo que se debe imprimir:

```text
5!=120
```

**Solución** 
[Ver solución 8](./ejercicios/ejercicio8/main.cpp)

---
### Ejercicio 9.

Escriba un programa que pida un número **N** e imprima el perímetro y área de un círculo con radio **N**.
**Nota:** use `3.1416` como una aproximación de pi.
**Ejemplo:** si se ingresa `1`, se debe imprimir:

```text
Perimetro:6.2832
Area:3.1416
```
**Solución** 
[Ver solución 9](./ejercicios/ejercicio9/main.cpp)

---
### Ejercicio 10.

Escriba un programa que pida un número **N** e imprima en pantalla todos los múltiplos de dicho número entre `1` y `100`.
**Ejemplo:** si se ingresa `33`, se debe imprimir:

```text
Multiplos de 33 menores que 100:
33
66
99
```

**Solución** 
[Ver solución 10](./ejercicios/ejercicio10/main.cpp)

---
### Ejercicio 11.

Escriba un programa que pida un número **N** e imprima en pantalla su tabla de multiplicar hasta `10xN`.
**Ejemplo:** si se ingresa `7`, se debe imprimir:

```text
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70
```
**Solución** 
[Ver solución 11](./ejercicios/ejercicio11/main.cpp)

---
### Ejercicio 12.

Escriba un programa que pida un número **N** e imprima todas las potencias desde **N^1** hasta **N^5**.
**Ejemplo:** si se ingresa `3`, se debe imprimir:

```text
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
```

**Solución** 
[Ver solución 12](./ejercicios/ejercicio12/main.cpp)

---
### Ejercicio 13.

Escriba un programa que pida un número **N** e imprima todos los divisores de **N**.
**Ejemplo:** si se ingresa `4`, se debe imprimir:

```text
Los divisores de 4 son:
1
2
4
```
**Solución** 
[Ver solución 13](./ejercicios/ejercicio13/main.cpp)

---
### Ejercicio 14.

Escriba un programa que imprima dos columnas paralelas, una con los números del `1` al `50` y otra con los números del `50` al `1`.
**Ejemplo:** las primeras líneas a imprimir serán:

```text
1    50
2    49
3    48
```
**Solución** 
[Ver solución 14](./ejercicios/ejercicio14/main.cpp)

---
### Ejercicio 15.

Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
**Ejemplo:** si se ingresan `1`, `2`, `3`, `0`, se debe imprimir:

```text
El resultado de la sumatoria es: 6
```
**Solución** 
[Ver solución 15](./ejercicios/ejercicio15/main.cpp)

---
### Ejercicio 16.

Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
**Ejemplo:** si se ingresan `1`, `2`, `3`, `0`, se debe imprimir:

```text
El promedio es: 2
```
**Solución** 
[Ver solución 16](./ejercicios/ejercicio16/main.cpp)

---
### Ejercicio 17.

Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados.
**Ejemplo:** si se ingresan `1`, `2`, `3`, `0`, se debe imprimir:

```text
El numero mayor fue: 3
```
**Solución** 
[Ver solución 17](./ejercicios/ejercicio17/main.cpp)

---
### Ejercicio 18.

Escriba un programa que pida un número **N** e imprima si es o no un cuadrado perfecto.
**Ejemplo:** si se ingresa `9`, se debe imprimir:

```text
9 es un cuadrado perfecto.
```
**Solución** 
[Ver solución 18](./ejercicios/ejercicio18/main.cpp)


Y si se ingresa `8`, se debe imprimir:

```text
8 NO es un cuadrado perfecto.
```
---
### Ejercicio 19.

Escriba un programa que pida un número **N** e imprima si es o no un número primo.
**Ejemplo:** si se ingresa `7`, se debe imprimir:

```text
7 es un numero primo.
```

Y si se ingresa `8`, se debe imprimir:

```text
8 NO es un numero primo.
```
**Solución** 
[Ver solución 19](./ejercicios/ejercicio19/main.cpp)

---
### Ejercicio 20.

Escriba un programa que pida un número **N** e imprima si es o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha).
**Ejemplo:** si se ingresa `121`, se debe imprimir:

```text
121 es un numero palindromo.
```

Y si se ingresa `123`, se debe imprimir:

```text
123 NO es un numero palindromo.
```
**Solución** 
[Ver solución 20](./ejercicios/ejercicio20/main.cpp)

---
### Ejercicio 21.

Escriba un programa que pida un carácter **C**. Si es una letra, la debe convertir de mayúscula a minúscula y viceversa e imprimirla.
**Ejemplo:** si se ingresa `B`, se debe imprimir:

```text
Letra convertida: b
```

Y si se ingresa `k`, se debe imprimir:

```text
Letra convertida: K
```
**Solución** 
[Ver solución 21](./ejercicios/ejercicio21/main.cpp)

---
### Ejercicio 22.

Escriba un programa que pida una cantidad entera de segundos y la imprima en formato `horas:minutos:segundos`.
**Ejemplo:** si se ingresa `7777`, se debe imprimir:

```text
2:9:37
```
**Solución** 
[Ver solución 22](./ejercicios/ejercicio22/main.cpp)

---
### Ejercicio 23.

Escriba un programa que pida dos números **A** y **B** e imprima en pantalla el mínimo común múltiplo entre los dos.
**Ejemplo:** si se ingresan `4` y `6`, se debe imprimir:

```text
El MCM de 4 y 6 es: 12
```
**Solución** 
[Ver solución 23](./ejercicios/ejercicio23/main.cpp)

---
### Ejercicio 24.

Escriba un programa que pida un número entero e imprima un cuadrado de dicho tamaño. Los bordes del cuadrado deben estar hechos con el carácter `+` y el interior debe estar vacío.
**Ejemplo:** si se ingresa `4`, se debe imprimir:

```text
++++
+  +
+  +
++++
```
**Solución** 
[Ver solución 24](./ejercicios/ejercicio24/main.cpp)

---
### Ejercicio 25.

Escriba un programa que pida un número **N** e imprima en pantalla la cantidad de dígitos de **N**.
**Ejemplo:** si se ingresa `1234`, se debe imprimir:

```text
1234 tiene 4 digitos.
```
**Solución** 
[Ver solución 25](./ejercicios/ejercicio25/main.cpp)

---
### Ejercicio 26.

Escriba un programa que pida tres números e imprima el tipo de triángulo (isósceles, equilátero, escaleno) que se formará, si sus lados tienen la longitud definida por los números ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
**Ejemplo:** si se ingresan `3`, `3` y `5`, se debe imprimir:

```text
Se forma un triangulo isosceles.
```

Y si se ingresan `3`, `3` y `6`, se debe imprimir:

```text
Las longitudes ingresadas no forman un triangulo.
```
**Solución** 
[Ver solución 26](./ejercicios/ejercicio26/main.cpp)

---
### Ejercicio 27.

Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división. El usuario debe ingresar los operandos y la operación a realizar.
**Ejemplo:** si se ingresan `3`, `+` y `5`, se debe imprimir:

```text
3+5=8
```
**Solución** 
[Ver solución 27](./ejercicios/ejercicio27/main.cpp)

---
### Ejercicio 28.

Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infinita:

```text
π = 4(1 - 1/3 + 1/5 - 1/7 + 1/9 ...)
```

El usuario debe ingresar el número de elementos usados en la aproximación.
**Ejemplo:** si se ingresa `3`:

```text
π = 4(1 - 1/3 + 1/5) = 3.46667
```

por lo que se debe imprimir:

```text
pi es aproximadamente: 3.46667
```
**Solución** 
[Ver solución 28](./ejercicios/ejercicio28/main.cpp)

---
### Ejercicio 29.

Escriba un programa que adivine un número **A** (entre `0` y `100`) seleccionado por el usuario (el número **NO** se ingresa al programa). El programa imprimirá en pantalla un número **B** y el usuario usará los símbolos `>`, `<` y `=` para indicarle al programa si **B** es mayor, menor o igual que **A**. El programa imprimirá un nuevo número **B**, con base en el símbolo ingresado por el usuario, y repetirá el proceso hasta acertar el número seleccionado por el usuario.

**Solución** 
[Ver solución 29](./ejercicios/ejercicio29/main.cpp)

---
### Ejercicio 30.

Escriba un programa que genere un número aleatorio **A** (entre `0` y `100`) y le pida al usuario que lo adivine. El usuario ingresa un número **B** y el programa le dirá si **B** es mayor o menor que **A**. Esto se repetirá hasta que el usuario adivine el número. En ese momento, el programa le dirá el número de intentos que tardó el usuario en adivinar el número.

**Nota:** Para generar el número aleatorio use la función `rand()` de la librería `<cstdlib>`. Recuerde convertirlo al rango `(0, 100)`.

**Solución** 
[Ver solución 30](./ejercicios/ejercicio30/main.cpp)

</details>

---
<details>
<summary><h2>3. Sustentación</h2></summary>
Se sustenta los ejercicios pares, se requiere que el código contenga Menú y validaciones.

**Solución** 
[Ver solución sustentación](./ejercicios/problemas_pares/main.cpp)
</details>


<details>
<summary><h2>3. Problemas (pares)</h2></summary>


### Problema 2.

Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada. Los billetes en circulación son de `$50.000`, `$20.000`, `$10.000`, `$5.000`, `$2.000` y `$1.000`, y las monedas son de `$500`, `$200`, `$100` y `$50`. Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.

**Ejemplo:** si se ingresa `47810`, el programa debe imprimir:

```text
50000 : 0
20000 : 2
10000 : 0
5000 : 1
2000 : 1
1000 : 0
500 : 1
200 : 1
100 : 1
50 : 0
Faltante: 10
```
---
### Problema 4.

Escriba un programa para leer dos números enteros con el siguiente significado: el valor del primer número representa una hora del día en un reloj de 24 horas, de modo que `1245` representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera, por lo que `345` representa tres horas y 45 minutos. El programa debe sumar esta duración al primer número, y el resultado será impreso en la misma notación. En este caso, `1630`, que es el tiempo de 3 horas y 45 minutos después de `12:45`.

**Nota:** el formato de salida debe ser:

```text
La hora es 1630.
```

Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados sea inválido:

```text
1560 es un tiempo invalido.
```
---
### Problema 6.

Escriba un programa que encuentre el valor aproximado del número de Euler en base a la siguiente suma infinita:

```text
e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ...
```
El usuario debe ingresar el número de elementos usados en la aproximación.

**Ejemplo:** si se ingresa `3`:

```text
e = 1/0! + 1/1! + 1/2! = 2.5
```

**Nota:** el formato de salida debe ser:

```text
e es aproximadamente: 2.5
```

---
### Problema 8.

Escriba un programa que reciba tres números **a**, **b** y **c**, y calcule la suma de todos los múltiplos de **a** y **b** que sean menores a **c**. Tenga en cuenta no sumar dos veces los múltiplos comunes.
**Ejemplo:** para `a = 3`, `b = 5` y `c = 10`, se sumarán:

```text
3 + 6 + 9 + 5 = 23
```
Para `a = 5`, `b = 7` y `c = 36`, se sumarán:

```text
5 + 10 + 15 + 20 + 25 + 30 + 35 + 7 + 14 + 21 + 28 = 210
```

**Nota:** el formato de salida debe ser:

```text
m11 + m12 + m13 + ... + m21 + m22 + m23... = sumatoria
```
Donde `m11` representa el primer múltiplo de **a** y así sucesivamente. `m21` representa el primer múltiplo de **b** y así sucesivamente.

---
### Problema 10.

Escriba un programa que reciba un número **n** e imprima el enésimo número primo.
**Ejemplo:** si se recibe `4`, el programa debe imprimir:

```text
El primo numero 4 es: 7
```
---

### Problema 12.

Escriba un programa que calcule el máximo factor primo de un número.
**Ejemplo:** si se recibe `33`, el programa debe imprimir:

```text
El mayor factor primo de 33 es: 11
```
---

### Problema 14.

Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha.
**Ejemplo:** `969`.
Escriba un programa que calcule el número palíndromo más grande que se puede obtener como una multiplicación de números de 3 dígitos.

**Ejemplo:** una de las posibles respuestas es:

```text
143*777=111111
```

**Nota:** la salida del programa debe ser:

```text
143*777=111111
```
---

### Problema 16.

La serie de Collatz se conforma con la siguiente regla: sea `n` un elemento de la serie. Si `n` es par, el siguiente elemento es `n/2`, y si `n` es impar, el siguiente elemento es `3n+1`.
Escriba un programa que reciba un número **k** y calcule cuál es el elemento inicial **j** (semilla), menor que **k**, que produce la serie más larga y diga cuántos términos tiene la serie.
**Nota:** la serie termina al llegar a un elemento cuyo valor sea `1`.
**Ejemplo:** para la semilla `13`:

```text
13, 40, 20, 10, 5, 16, 8, 4, 2, 1
```

**Nota:** la salida del programa debe ser:
```text
La serie mas larga es con la semilla: j, teniendo m terminos.
```
**Otra nota:** se le dará una bonificación si imprime la serie.

</details>


<details>
<summary><h2>4. Problemas (impares)</h2></summary>

### Problema 1.

Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las dos, e imprima un mensaje según el caso.
**Nota:** el formato de salida debe ser:
```text
no es una letra.
a es una vocal.
```

### Problema 3.

Escriba un programa que deba leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día es válida. El caso más especial es el `29 de febrero`; en dicho caso imprimir `posiblemente año bisiesto`.
**Nota:** el formato de salida debe ser:

```text
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.
```

### Problema 5.

Escriba un programa que muestre el siguiente patrón centrado en la pantalla, formando un diamante:

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

El tamaño del patrón estará determinado por un número entero impar que ingrese el usuario.
**Ejemplo:** en el patrón mostrado, el tamaño de la figura es `7`.

### Problema 7.

En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con `1` y `1`. **Ejemplo:**

```text
1, 1, 2, 3, 5, 8, ...
```

Escriba un programa que reciba un número **n** y halle la suma de todos los números pares en la serie de Fibonacci menores a **n**.
**Ejemplo:** si se ingresa `10`, se realizará la suma de:

```text
2 + 8 = 10
```
**Nota:** el formato de salida debe ser:
```text
El resultado de la suma es: 10
```

### Problema 9.

Escriba un programa que pida un número entero **N** e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
**Ejemplo:** si se ingresa `1223`, el resultado será:
```text
1^1 + 2^2 + 2^2 + 3^3 = 36
```
**Nota:** la salida del programa debe ser:
```text
El resultado de la suma es: 36.
```

### Problema 11.

Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre `1` y el número ingresado.
**Ejemplo:** si se recibe `4`, el programa debe imprimir:
```text
El minimo comun multiplo es: 12.
```

### Problema 13.

Escriba un programa que reciba un número y calcule la suma de todos los números primos menores que el número ingresado.
**Ejemplo:** si se recibe `10`, el programa debe imprimir:
```text
El resultado de la suma es: 17.
```

### Problema 15.

Empezando con el número `1` y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números como la siguiente:

<table>
  <tr>
    <td><strong>21</strong></td>
    <td>22</td>
    <td>23</td>
    <td>24</td>
    <td><strong>25</strong></td>
  </tr>
  <tr>
    <td>20</td>
    <td><strong>7</strong></td>
    <td>8</td>
    <td><strong>9</strong></td>
    <td>10</td>
  </tr>
  <tr>
    <td>19</td>
    <td>6</td>
    <td><strong>1</strong></td>
    <td>2</td>
    <td>11</td>
  </tr>
  <tr>
    <td>18</td>
    <td><strong>5</strong></td>
    <td>4</td>
    <td><strong>3</strong></td>
    <td>12</td>
  </tr>
  <tr>
    <td><strong>17</strong></td>
    <td>16</td>
    <td>15</td>
    <td>14</td>
    <td><strong>13</strong></td>
  </tr>
</table>

En el caso de esta espiral de `5x5`, la suma de los números en la diagonal es `101`. Escriba un programa que reciba un número impar **n** y calcule la suma de los números en la diagonal de una espiral de `nxn`.
**Nota:** la salida del programa debe ser:
```text
En una espiral de 5x5, la suma es: 101.
```
**Otra nota:** se le dará una bonificación si imprime la espiral.

### Problema 17.

La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior: `1, 1 + 2 = 3, 3 + 3 = 6, 6 + 4 = 10, 10 + 5 = 15, 15 + 6 = 21, 21 + 7 = 28, ...`
Si listamos los números triangulares y sus divisores tenemos:

`1: 1`  
`3: 1, 3`  
`6: 1, 2, 3, 6`  
`10: 1, 2, 5, 10`  
`15: 1, 3, 5, 15`  
`21: 1, 3, 7, 21`  
`28: 1, 2, 4, 7, 14, 28`

Se observa que **28 es el primer número triangular que tiene más de 5 divisores**. Escriba un programa que reciba un número **K** y calcule cuál es el primer número triangular que tiene más de **K divisores**.**Tip:** El enésimo número triangular se puede representar como: `n * (n + 1) / 2`
**Nota:** La salida del programa debe ser:
```text
El numero es: 28 que tiene 6 divisores.
</details>
