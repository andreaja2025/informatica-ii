# Escriba una función en Python que reciba un intervalo [a, b] y
# retorne una lista con los números perfectos en ese rango.

def numeros_perfectos(a, b): #recibe a y b
    lista_perfectos = []  #lista vacia
    for num in range(a, b + 1):
        if num < 2:
            continue
            
        # El 1 siempre es divisor propio de cualquier número mayor que 1
        suma_divisores = 1
        
        # Iteramos hasta la raíz cuadrada para optimizar la búsqueda de divisores
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                suma_divisores += i
                # Si el divisor complementario es diferente, también se suma
                if i != num // i:
                    suma_divisores += num // i
                    
        # comparo si la suma es igual al número original, es perfecto
        if suma_divisores == num:
            lista_perfectos.append(num) # si es asi agregarla a la lista
            
    return lista_perfectos

#
print ("ingrese el valor para a:")
a1 = int(input())
print ("ingrese el valor para b")
b1 = int(input())

print(numeros_perfectos(a1, b1))
