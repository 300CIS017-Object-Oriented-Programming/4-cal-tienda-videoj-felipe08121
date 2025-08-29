//
// Created by felip on 29/08/2025.
//

#include "RandomPlay.h"

void mostrarCatologoJuegos(){

    int opcion  = 0;

    cout << "=====  - Catalogo de juegos ===== \n";

    cout << "Que Genero juegos desea ver? : \n";
    cout << "1.  Accion. \n";
    cout << "2.  Aventura.\n ";
    cout << "3.  Deportes. \n ";
    cout << "4.  Estrategia \n ";

    cin >> opcion;


        if (opcion == 1 ) {

            cout << "----Accion---- \n";
            cout << "1. Battlefield; Plataforma: (PS5) \n";
            cout << "2. Call of Duty (Xbox) \n";
            cout << "3. Cyberpunk 2077  (PC)\n";

        }

        else if ( opcion == 2 ) {
            cout << "----- Aventura ----- \n";
            cout << "4. The Witcher 3; Plataforma:(PC) \n";
            cout << "5. Pokemon; Plataforma:  (Switch) \n";
            cout << "6. Zelda (Switch); Plataforma:  \n";
            cout << "-1. Salir \n ";
        }
        else if (opcion == 3 ) {
            cout << "----- Deportes -----\n";
            cout << "7. FIFA; Plataforma: (PS5)  \n";
            cout << "8. NBA; Plataforma: (Xbox) \n";
            cout << "9. NFL; Plataforma:( \n";

        }
        else if ( opcion == 4 ) {
            cout << "----- Estrategia ----- \n";
            cout << "10. Total War: Rome; Plataforma: (PC) \n";
            cout << "11. Stellaris; Plataforma:  (PC) \n";
            cout << "12. CiV: 5; Plataforma: (PC) \n";

        }

}

int leerCodigoJuego() {

    int codigo;
    cout << "Ingrese el codigo del juego: \n";
    cin  >> codigo;
    if ( codigo < 1 || codigo > 10  ) {
        cout << "Codigo invalido, por favor intente de nuevo. (1-12) \n";
        cin.clear();
        cin.ignore( 1000, '\n');
        cin >> codigo;
    }

    return codigo;
}

int leerCantidadJuegos() {

 int cantidad;
    cout << "Por favor ingrese la cantidad de juegos (1-20) \n";
    cin >> cantidad;
    if (cantidad < 1 || cantidad > 20 ) {
        cout << "Cantidad invalida, por favor intente de nuevo. (1-20) \n";
        cin.clear();
        cin. ignore( 1000, '\n' );
        cin >> cantidad;
    }
    return cantidad;
}


void agregarJuegoAlCarrito(int codigos[], int cantidades[], int &cantidadJuegosRegistrados) {

    if (cantidadJuegosRegistrados >= MAX_ITEMS) {
        cout << "No es posible agregar mas juegos en el carrito. \n";
        return;
    }

    int codigo = leerCodigoJuego();
    int cantidadJuegos =leerCantidadJuegos();




mostrarCatologoJuegos();


void cargarCompraDemo( int codigos[], int cantidades[], int &cantidadJuegosRegistrados ) {

cantidadJuegosRegistrados = 0;

codigos[ 0 ] = 1;    // zzz
cantidades[ 0 ]= 5;

codigos[ 1 ] = 2; // Battlefield
cantidades[ 1 ] = 3;

codigos[ 2 ]= 3; // The witcher 3
cantidades[ 2 ] = 1;

codigos[ 3 ] = 4;
cantidades[ 3 ] = 2;

cantidadJuegosRegistrados = 4;


}