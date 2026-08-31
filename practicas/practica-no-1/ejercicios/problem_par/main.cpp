// ANDREA JULIETH ARIAS CANTILLO
// CC. 1193578006

#include <iostream>

using namespace std;

int main() {

    int opcion;

    cout << "==============================================" << endl;
    cout << "              PRACTICA 1 - MENU               " << endl;
    cout << "==============================================" << endl;
    cout << "Seleccione el numero del problema que desea ejecutar." << endl;
    cout << "Los problemas disponibles son:" << endl;
    cout << endl;

    cout << "2  - Minima combinacion de billetes y monedas" << endl;
    cout << "4  - Suma de tiempos en formato de 24 horas" << endl;
    cout << "6  - Aproximacion del numero de Euler" << endl;
    cout << "8  - Suma de multiplos sin repetir comunes" << endl;
    cout << "10 - Enesimo numero primo" << endl;
    cout << "12 - Mayor factor primo de un numero" << endl;
    cout << "14 - Mayor palindromo producto de dos numeros de 3 digitos" << endl;
    cout << "16 - Serie de Collatz mas larga" << endl;
    cout << "0  - Salir" << endl;


    do {

        cout << endl;
        cout << "Ingrese el numero del problema que desea ejecutar (0 para salir): ";
        cin >> opcion;

        /*
        Si el usuario escribe letras o caracteres que no corresponden
        a un numero, cin entra en estado de error. Se limpia para
        poder volver a pedir el dato.
        */
        if (cin.fail()) {

            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Entrada invalida. Debe ingresar solamente el numero "
                 << "del problema." << endl;

            opcion = -1;
        }


        switch (opcion) {

            // PROBLEMA 2

        case 2: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 2 - BILLETES Y MONEDAS" << endl;
            cout << "----------------------------------------------" << endl;

            /*
            Se utiliza long long porque una cantidad de dinero puede
            ser mayor que el limite de un int. Ademas, no necesitamos
            decimales porque el problema trabaja con pesos enteros.
            */

            long long monto;

            cout << "Ingrese la cantidad de dinero que desea desglosar." << endl;
            cout << "IMPORTANTE: escriba solamente numeros enteros." << endl;
            cout << "No utilice $, puntos, comas ni espacios." << endl;
            cout << "Ejemplo correcto: 47810" << endl;
            cout << "Ejemplo incorrecto: $47.810 o 47,810" << endl;
            cout << endl;

            cout << "Monto: ";
            cin >> monto;

            while (cin.fail() || monto < 0) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida." << endl;
                    cout << "Debe ingresar solamente un numero entero "
                         << "sin puntos, comas ni simbolos." << endl;

                }
                else {

                    cout << "El monto no puede ser negativo." << endl;
                }

                cout << "Ingrese nuevamente el monto: ";
                cin >> monto;
            }


            int billete50000;
            int billete20000;
            int billete10000;
            int billete5000;
            int billete2000;
            int billete1000;

            int moneda500;
            int moneda200;
            int moneda100;
            int moneda50;

            billete50000 = monto / 50000;
            monto = monto % 50000;

            billete20000 = monto / 20000;
            monto = monto % 20000;

            billete10000 = monto / 10000;
            monto = monto % 10000;

            billete5000 = monto / 5000;
            monto = monto % 5000;

            billete2000 = monto / 2000;
            monto = monto % 2000;

            billete1000 = monto / 1000;
            monto = monto % 1000;

            moneda500 = monto / 500;
            monto = monto % 500;

            moneda200 = monto / 200;
            monto = monto % 200;

            moneda100 = monto / 100;
            monto = monto % 100;

            moneda50 = monto / 50;
            monto = monto % 50;

            cout << endl;
            cout << "50000 : " << billete50000 << endl;
            cout << "20000 : " << billete20000 << endl;
            cout << "10000 : " << billete10000 << endl;
            cout << "5000  : " << billete5000 << endl;
            cout << "2000  : " << billete2000 << endl;
            cout << "1000  : " << billete1000 << endl;
            cout << "500   : " << moneda500 << endl;
            cout << "200   : " << moneda200 << endl;
            cout << "100   : " << moneda100 << endl;
            cout << "50    : " << moneda50 << endl;
            cout << "Faltante: " << monto << endl;

            break;
        }


            // =========================================================
            // PROBLEMA 4
            // =========================================================

        case 4: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 4 - SUMA DE TIEMPOS" << endl;
            cout << "----------------------------------------------" << endl;

            int horaInicial;
            int duracion;

            int horasIniciales;
            int minutosIniciales;

            int horasDuracion;
            int minutosDuracion;

            int minutosFinales;
            int horasFinales;

            cout << "Ingrese la hora inicial en formato HHMM." << endl;
            cout << "Use un numero entero, sin dos puntos ni espacios." << endl;
            cout << "Ejemplo: 1245 representa las 12:45." << endl;
            cout << "Ingrese 0 para las 00:00." << endl;
            cout << endl;

            cout << "Hora inicial: ";
            cin >> horaInicial;

            while (cin.fail()) {

                cin.clear();
                cin.ignore(10000, '\n');

                cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                cout << "Hora inicial: ";
                cin >> horaInicial;
            }

            horasIniciales = horaInicial / 100;
            minutosIniciales = horaInicial % 100;

            if (horasIniciales < 0 ||
                horasIniciales > 23 ||
                minutosIniciales < 0 ||
                minutosIniciales > 59) {

                cout << horaInicial << " es un tiempo invalido." << endl;
                break;
            }


            cout << endl;
            cout << "Ingrese ahora la duracion en formato HHMM." << endl;
            cout << "Ejemplo: 345 representa 3 horas y 45 minutos." << endl;
            cout << "No escriba dos puntos ni espacios." << endl;
            cout << endl;

            cout << "Duracion: ";
            cin >> duracion;

            while (cin.fail()) {

                cin.clear();
                cin.ignore(10000, '\n');

                cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                cout << "Duracion: ";
                cin >> duracion;
            }

            horasDuracion = duracion / 100;
            minutosDuracion = duracion % 100;

            if (horasDuracion < 0 ||
                horasDuracion > 23 ||
                minutosDuracion < 0 ||
                minutosDuracion > 59) {

                cout << duracion << " es un tiempo invalido." << endl;
                break;
            }


            minutosFinales = minutosIniciales + minutosDuracion;

            horasFinales = horasIniciales + horasDuracion;

            /*
            Si los minutos llegan a 60, se convierten en una hora.
            El operador % permite conservar solamente los minutos
            restantes.
            */

            if (minutosFinales >= 60) {

                horasFinales = horasFinales + minutosFinales / 60;
                minutosFinales = minutosFinales % 60;
            }

            /*
            Se utiliza modulo 24 porque el reloj trabaja con
            formato de 24 horas.
            */

            horasFinales = horasFinales % 24;

            cout << endl;
            cout << "La hora es "
                 << horasFinales * 100 + minutosFinales
                 << "." << endl;

            break;
        }

            // PROBLEMA 6

        case 6: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 6 - NUMERO DE EULER" << endl;
            cout << "----------------------------------------------" << endl;

            int cantidadTerminos;

            /*
            Se utiliza double porque el resultado es decimal.
            */

            double e;
            double termino;

            cout << "Ingrese la cantidad de elementos que desea utilizar "
                 << "para aproximar e." << endl;
            cout << "Debe ingresar un numero entero mayor o igual a 1." << endl;
            cout << "Ejemplo: si ingresa 3 se utilizan 1/0!, 1/1! y 1/2!." << endl;
            cout << endl;

            cout << "Cantidad de elementos: ";
            cin >> cantidadTerminos;

            while (cin.fail() || cantidadTerminos < 1) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                }
                else {

                    cout << "La cantidad debe ser mayor o igual a 1." << endl;
                }

                cout << "Cantidad de elementos: ";
                cin >> cantidadTerminos;
            }

            /*
            El primer termino es 1/0! = 1.
            En lugar de calcular factoriales completos, cada termino
            se obtiene dividiendo el termino anterior entre i.
            Esto evita factoriales demasiado grandes.
            */

            e = 1.0;
            termino = 1.0;

            for (int i = 1; i < cantidadTerminos; i++) {

                termino = termino / i;
                e = e + termino;
            }

            cout << endl;
            cout << "e es aproximadamente: " << e << endl;

            break;
        }


            // PROBLEMA 8

        case 8: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 8 - SUMA DE MULTIPLOS" << endl;
            cout << "----------------------------------------------" << endl;

            long long a;
            long long b;
            long long c;
            long long suma;

            bool seImprimioNumero;

            cout << "Ingrese el numero a." << endl;
            cout << "Debe ser un entero positivo." << endl;
            cout << "a: ";
            cin >> a;

            while (cin.fail() || a <= 0) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Ingrese un numero entero." << endl;
                }
                else {

                    cout << "a debe ser mayor que cero." << endl;
                }

                cout << "a: ";
                cin >> a;
            }


            cout << endl;
            cout << "Ingrese el numero b." << endl;
            cout << "Debe ser un entero positivo." << endl;
            cout << "b: ";
            cin >> b;

            while (cin.fail() || b <= 0) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Ingrese un numero entero." << endl;
                }
                else {

                    cout << "b debe ser mayor que cero." << endl;
                }

                cout << "b: ";
                cin >> b;
            }


            cout << endl;
            cout << "Ingrese el limite c." << endl;
            cout << "Solo se tendran en cuenta multiplos menores que c." << endl;
            cout << "c debe ser un entero positivo." << endl;
            cout << "c: ";
            cin >> c;

            while (cin.fail() || c <= 0) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Ingrese un numero entero." << endl;
                }
                else {

                    cout << "c debe ser mayor que cero." << endl;
                }

                cout << "c: ";
                cin >> c;
            }


            suma = 0;
            seImprimioNumero = false;


            /*
            Primero se recorren los multiplos de a.
            El ciclo usa m += a para ir directamente al siguiente
            multiplo sin revisar numeros que no sirven.
            */

            for (long long m = a; m < c; m = m + a) {

                if (seImprimioNumero) {
                    cout << " + ";
                }

                cout << m;

                suma = suma + m;
                seImprimioNumero = true;
            }


            /*
            Ahora se recorren los multiplos de b.
            Si m % a == 0 significa que tambien es multiplo de a,
            por lo tanto ya fue sumado y no se vuelve a incluir.
            */

            for (long long m = b; m < c; m = m + b) {

                if (m % a != 0) {

                    if (seImprimioNumero) {
                        cout << " + ";
                    }

                    cout << m;

                    suma = suma + m;
                    seImprimioNumero = true;
                }
            }


            if (!seImprimioNumero) {
                cout << "No existen multiplos menores que " << c << ".";
            }

            cout << " = " << suma << endl;

            break;
        }


            // PROBLEMA 10=

        case 10: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 10 - ENESIMO NUMERO PRIMO" << endl;
            cout << "----------------------------------------------" << endl;

            int n;
            int cantidadPrimos;

            /*
            Se utiliza long long para el candidato porque permite
            trabajar con numeros primos mayores que el limite de int.
            */

            int candidato;

            bool esPrimo;

            cout << "Ingrese la posicion n del numero primo que desea encontrar." << endl;
            cout << "n debe ser un entero mayor o igual a 1." << endl;
            cout << "Ejemplo: n = 4 produce el cuarto primo, que es 7." << endl;
            cout << endl;

            cout << "n: ";
            cin >> n;

            while (cin.fail() || n < 1) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                }
                else {

                    cout << "n debe ser mayor o igual a 1." << endl;
                }

                cout << "n: ";
                cin >> n;
            }


            candidato = 1;
            cantidadPrimos = 0;


            while (cantidadPrimos < n) {

                candidato = candidato + 1;

                esPrimo = true;

                /*
                Solo es necesario probar divisores hasta la raiz
                cuadrada del candidato. Se usa candidato / divisor
                en vez de divisor * divisor para evitar desbordamiento.
                */

                for (int divisor = 2;
                     divisor <= candidato / divisor;
                     divisor++) {

                    if (candidato % divisor == 0) {

                        esPrimo = false;
                        break;
                    }
                }

                if (esPrimo) {
                    cantidadPrimos++;
                }
            }


            cout << endl;
            cout << "El primo numero " << n
                 << " es: " << candidato << endl;

            break;
        }


            // PROBLEMA 12

        case 12: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 12 - MAYOR FACTOR PRIMO" << endl;
            cout << "----------------------------------------------" << endl;

            int numero;
            int resto;
            int mayorFactor;

            cout << "Ingrese un numero entero mayor o igual a 2." << endl;
            cout << "El programa buscara su mayor factor primo." << endl;
            cout << "Ejemplo: 33 tiene como mayor factor primo el 11." << endl;
            cout << endl;

            cout << "Numero: ";
            cin >> numero;

            while (cin.fail() || numero < 2) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                }
                else {

                    cout << "El numero debe ser mayor o igual a 2." << endl;
                }

                cout << "Numero: ";
                cin >> numero;
            }


            resto = numero;
            mayorFactor = 1;


            /*
            Primero se eliminan todos los factores 2.
            Despues solamente se revisan numeros impares.
            Esto reduce la cantidad de divisiones necesarias.
            */

            while (resto % 2 == 0) {

                mayorFactor = 2;
                resto = resto / 2;
            }


            for (int divisor = 3;
                 divisor <= resto / divisor;
                 divisor = divisor + 2) {

                while (resto % divisor == 0) {

                    mayorFactor = divisor;
                    resto = resto / divisor;
                }
            }


            /*
            Si despues del proceso queda un numero mayor que 1,
            ese numero es un factor primo mayor que los anteriores.
            */

            if (resto > 1) {
                mayorFactor = resto;
            }


            cout << endl;
            cout << "El mayor factor primo de "
                 << numero << " es: "
                 << mayorFactor << endl;

            break;
        }


            // PROBLEMA 1

        case 14: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 14 - MAYOR PALINDROMO" << endl;
            cout << "----------------------------------------------" << endl;

            int mayorPalindromo;
            int primerFactor;
            int segundoFactor;

            int producto;
            int numeroInvertido;
            int numeroOriginal;


            /*
            El producto de dos numeros de tres digitos no supera
            999 x 999 = 998001, por lo que int es suficiente.
            */

            mayorPalindromo = 0;
            primerFactor = 0;
            segundoFactor = 0;


            /*
            Se empieza desde 999 hacia abajo. Al buscar primero los
            numeros grandes se puede encontrar rapidamente un
            candidato grande.
            */

            for (int primerNumero = 999;
                 primerNumero >= 100;
                 primerNumero--) {

                for (int segundoNumero = primerNumero;
                     segundoNumero >= 100;
                     segundoNumero--) {

                    producto = primerNumero * segundoNumero;


                    /*
                    Si el producto ya es menor o igual al mejor
                    palindromo encontrado, no tiene sentido revisar
                    si puede reemplazarlo.
                    */

                    if (producto <= mayorPalindromo) {
                        continue;
                    }


                    numeroOriginal = producto;
                    numeroInvertido = 0;


                    /*
                    Se invierten los digitos del producto para
                    comprobar si se lee igual de ambos lados.
                    */

                    while (numeroOriginal > 0) {

                        numeroInvertido =
                            numeroInvertido * 10 +
                            numeroOriginal % 10;

                        numeroOriginal = numeroOriginal / 10;
                    }


                    if (numeroInvertido == producto) {

                        mayorPalindromo = producto;
                        primerFactor = primerNumero;
                        segundoFactor = segundoNumero;
                    }
                }
            }


            cout << primerFactor
                 << "*" << segundoFactor
                 << "=" << mayorPalindromo << endl;

            break;
        }


            // PROBLEMA 16

        case 16: {

            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "PROBLEMA 16 - SERIE DE COLLATZ" << endl;
            cout << "----------------------------------------------" << endl;

            /*
            Se utiliza long long porque durante una serie de Collatz
            los valores pueden crecer bastante antes de llegar a 1.
            */

            long long k;
            long long semillaGanadora;
            long long mayorCantidadTerminos;

            cout << "Ingrese el limite k." << endl;
            cout << "El programa revisara todas las semillas enteras "
                 << "desde 1 hasta k-1." << endl;
            cout << "k debe ser un entero mayor o igual a 2." << endl;
            cout << endl;

            cout << "k: ";
            cin >> k;

            while (cin.fail() || k < 2) {

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Entrada invalida. Debe ingresar un numero entero." << endl;
                }
                else {

                    cout << "k debe ser mayor o igual a 2." << endl;
                }

                cout << "k: ";
                cin >> k;
            }


            semillaGanadora = 1;
            mayorCantidadTerminos = 1;


            /*
            Se prueba cada posible semilla menor que k.
            */

            for (long long semilla = 1;
                 semilla < k;
                 semilla++) {

                long long valor = semilla;
                long long cantidadTerminos = 1;


                /*
                La serie termina cuando el valor llega a 1.
                */

                while (valor != 1) {

                    if (valor % 2 == 0) {

                        valor = valor / 2;
                    }
                    else {

                        valor = 3 * valor + 1;
                    }

                    cantidadTerminos++;
                }


                if (cantidadTerminos > mayorCantidadTerminos) {

                    mayorCantidadTerminos = cantidadTerminos;
                    semillaGanadora = semilla;
                }
            }


            cout << endl;
            cout << "La serie mas larga es con la semilla: "
                 << semillaGanadora
                 << ", teniendo "
                 << mayorCantidadTerminos
                 << " terminos." << endl;


            /*
            para la impresion de la serie se vuelve a recorrer solamente la semilla
            ganadora para mostrar todos sus elementos.
            */

            cout << "Serie: " << semillaGanadora;

            long long valorSerie = semillaGanadora;

            while (valorSerie != 1) {

                if (valorSerie % 2 == 0) {

                    valorSerie = valorSerie / 2;
                }
                else {

                    valorSerie = 3 * valorSerie + 1;
                }

                cout << ", " << valorSerie;
            }

            cout << endl;

            break;
        }


            // SALIR

        case 0: {

            cout << endl;
            cout << "Saliendo del programa..." << endl;

            break;
        }


        // OPCION INVALIDA
        default: {

            cout << endl;
            cout << "La opcion ingresada no corresponde a un problema "
                 << "disponible." << endl;
            cout << "Seleccione 2, 4, 6, 8, 10, 12, 14, 16 o 0 para salir."
                 << endl;

            break;
        }

        }

    } while (opcion != 0);


    return 0;
}