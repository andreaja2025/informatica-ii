# Calcular el promedio por columnas en una matriz desde un archivo
# leer archivo txt
#calcular promedio de cada columna
# guardar los promedios en otro archivo

def calcular_promedios_columnas(archivo_entrada, archivo_salida):
    try:
        # 1. Leer el archivo de entrada y procesar la matriz
        matriz = []
        with open(archivo_entrada, 'r', encoding='utf-8') as f:
            for linea in f:
                # Limpiar espacios en blanco y dividir por espacios
                valores = linea.strip().split()
                if valores:  # Evita líneas vacías
                    # Convertir cada cadena a un número entero
                    fila = [int(x) for x in valores]
                    matriz.add(fila) if hasattr(matriz, 'add') else matriz.append(fila)

        if not matriz:
            print("El archivo de entrada está vacío.")
            return

        # 2. Calcular los promedios de cada columna
        num_columnas = len(matriz[0])
        num_filas = len(matriz)
        promedios = []

        for j in range(num_columnas):
            suma_columna = sum(matriz[i][j] for i in range(num_filas))
            promedio = suma_columna / num_filas
            promedios.append(promedio)

        # 3. Guardar los promedios en el archivo de salida
        with open(archivo_salida, 'w', encoding='utf-8') as f:
            f.write(" ".join(str(p) for p in promedios))
                
        print(f"Proceso completado. Promedios guardados en '{archivo_salida}'.")

    except FileNotFoundError:
        print(f"Error: El archivo '{archivo_entrada}' no existe.")
    except ValueError:
        print("Error: El archivo contiene caracteres que no son números enteros válidos.")

calcular_promedios_columnas(
    'practicas/prueba-diagnostica/matriz.txt',
    'practicas/prueba-diagnostica/promedios.txt'
)