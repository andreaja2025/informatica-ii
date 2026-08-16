import random

def generar_nombres():
    nombres_base = ["Juan", "Jose", "Javier", "Julian", "Joel", "Joaquin",
                    "Jonathan", "Pedro", "Carlos", "Andres", "Felipe",
                    "Ricardo", "Daniel", "Santiago"]
    return [random.choice(nombres_base) for _ in range(100)]

buscar_letra = input("Ingrese una letra: ").strip().upper()

lista_nombres = generar_nombres()
nombres_filtrados = [nombre for nombre in lista_nombres if nombre.upper().startswith(buscar_letra)]

for nombre in nombres_filtrados:
    print(nombre)