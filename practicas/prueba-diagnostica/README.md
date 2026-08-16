<div align="center">
  
<table>
  <tr>
    <td width="75%" align="center">
      <h2>UNIVERSIDAD DE ANTIOQUIA</h2>
      <h3>Departamento de Ingeniería Electrónica y Telecomunicaciones</h3>
      <h2>INFORMÁTICA II</h2>
      <h3>Prueba Diagnóstica</h3>
    </td>
    <td width="25%" align="center">
      <img src="../../assets/Logoudea-vertical.jpg" alt="Logo Universidad de Antioquia" width="200">
    </td>
  </tr>
</table>

</div>

---
### 1. Básico 

**Búsqueda de nombres por inicial.**

Se tiene el siguiente código en Python que genera una lista de **100 nombres aleatorios**. Modifíquelo para que solicite al usuario una letra y muestre solo los nombres que comienzan con esa letra.

```python
import random

def generar_nombres():
    nombres_base = ["Juan", "Jose", "Javier", "Julian", "Joel", "Joaquin",
                    "Jonathan", "Pedro", "Carlos", "Andres", "Felipe",
                    "Ricardo", "Daniel", "Santiago"]
    return [random.choice(nombres_base) for _ in range(100)]

nombres = generar_nombres()
```
#TODO: Pedir una letra al usuario y filtrar los nombres que comiencen con esa letra.

**Ejemplo de entrada y salida**

```text
Ingrese una letra: J
Juan
Jose
Javier
...
```
---
### 2. Medio
**Determinar los números perfectos en un intervalo:** un **número perfecto** es
aquel cuya suma de sus divisores propios (excluyendo el mismo número) es
igual al número original.
**Ejercicio:** Escriba una función en Python que reciba un intervalo `[a, b]` y
retorne una lista con los **números perfectos** en ese rango.

**Ejemplo de entrada y salida:**

```text
>>> numeros_perfectos(1, 30)
[6, 28]
```
**Explicación**
- **6** es perfecto porque `1 + 2 + 3 = 6`.
- **28** es perfecto porque `1 + 2 + 4 + 7 + 14 = 28`.

---
### 3. Sobresaliente
**Calcular el promedio por columnas en una matriz desde un archivo**.
Se tiene un archivo de texto que contiene una matriz de números enteros.
Cada línea del archivo representa una fila de la matriz, con valores separados
por espacios.
**Ejercicio:** Escriba un programa en Python que:
1. **Lea un archivo de texto** con una matriz de enteros.
2. **Calcule el promedio de cada columna.**
3. **Guarde los promedios en otro archivo de salida.**

**Ejemplo de archivo de entrada (matriz.txt)**
```text
4 8 15 16 23 42
10 20 30 40 50 60
1 2 3 4 5 6
```
**Ejemplo de archivo de salida (promedios.txt)**
```text
5.0 10.0 16.0 20.0 26.0 36.0
```
**Reglas:**
- La matriz tendrá dimensiones desconocidas (puede ser de cualquier tamaño).
- Cada fila del archivo de salida debe contener el promedio correspondiente.
- Se permite el uso de funciones para manipular strings `(split(), strip(), etc.).`