//
// Created by felip on 29/08/2025.
//

#include "RandomPlay.h"


string obtenerNombreJuego(int codigoJuego) {

    switch ( codigoJuego ) {

        case 1: {
            return "Battlefield" ;
        }
        case 2: {
            return "Call of Duty";
        }
        case 3: {
            return"Cyberpunk 2077";
        }
        case 4: {
            return"The Witcher 3";
        }
        case 5: {
            return"Pokemon";
        }
        case 6: {
            return"Zelda";
        }
        case 7: {
            return" FIFA";
        }
        case 8: {
            return"NBA";
        }
        case 9: {
            return"NFL";
        }
        case 10: {
            return"Total War: Rome";
        }
        case 11: {
            return"Stellaris";
        }
        case 12: {
            return"CiV: 5";
        }

        default: {
            return "Producto desconocido. ";
        }

    }
}

string obtenerCategoria(int codigoJuego) {

    switch ( codigoJuego ) {

        case 1:
        case 2:
        case 3:
            return"Accion";

        case 4:
        case 5:
        case 6:
            return"Aventura";

        case 7:
        case 8:
        case 9:
            return"Deportes";

        case 10:
        case 11:
        case 12:
            return"Estrategia";

        default:
            return "Producto desconocido. ";

    }
}

string obtenerPlataforma ( int codigoJuego ) {
    switch ( codigoJuego ) {

        case 1:
        case 7:
        case 9:
            return"Ps5";

        case 2:
        case 8:
            return"Xbox";

        case 5:
        case 6:
            return"Switch";

        case 4 :
        case 3 :
        case 10:
        case 11:
        case 12:
            return"Pc";

        default:
            return "Producto desconocido. ";

    }

}


int obtenerPrecioJuego(int codigoJuego) {
    switch ( codigoJuego ) {

        case 1: {
            return abs(PRECIO_JUEGO_BATTLEFIELD );
        }
        case 2: {
            return abs(PRECIO_JUEGO_CALLOFDUTY);
        }
        case 3: {
            return abs(PRECIO_JUEGO_CYRBERPUNK_2077);
        }
        case 4: {
            return abs(PRECIO_JUEGO_THEWITCHER_3);
        }
        case 5: {
            return abs(PRECIO_JUEGO_POKEMON);
        }
        case 6: {
            return abs(PRECIO_JUEGO_ZELDA);
        }

        case 7: {
            return abs(PRECIO_JUEGO_FIFA);
        }
        case 8: {
            return abs(PRECIO_JUEGO_NBA);
        }
        case 9: {
            return abs(PRECIO_JUEGO_NFL);
        }

        case 10: {
            return abs(PRECIO_JUEGO_TOTALWAR_ROME);
        }
        case 11: {
            return abs(PRECIO_JUEGO_STELLARIS);
        }
        case 12: {
            return abs(PRECIO_JUEGO_CIV_5);
        }

        default: {
            return 0;
        }

    }
}



void mostrarCatologoJuegos(){

    int opcion  = 0;

    cout << "\n =====  Catalogo de juegos  ===== \n";

    cout << "1. Accion. \n";
    cout << "2. Aventura.\n";
    cout << "3. Deportes. \n";
    cout << "4. Estrategia \n";

    cout << "Que Genero juegos desea ver? : \n";
    cin >> opcion;


        if (opcion == 1 ) {

            cout << "----Accion---- \n";
            cout << "1. Battlefield; Plataforma (PS5) $" << abs(PRECIO_JUEGO_BATTLEFIELD) << "\n";
            cout << "2. Call of Duty (Xbox) $" << abs(PRECIO_JUEGO_CALLOFDUTY) << "\n";
            cout << "3. Cyberpunk 2077  (PC) $" << abs(PRECIO_JUEGO_CYRBERPUNK_2077) << "\n";

        }

        else if ( opcion == 2 ) {
            cout << "----- Aventura ----- \n";
            cout << "4. The Witcher 3; Plataforma (PC) $" << abs(PRECIO_JUEGO_THEWITCHER_3) << "\n";
            cout << "5. Pokemon; Plataforma (Switch) $" << abs(PRECIO_JUEGO_POKEMON) << "\n";
            cout << "6. Zelda (Switch) $" << abs(PRECIO_JUEGO_ZELDA) << "\n";

        }
        else if (opcion == 3 ) {
            cout << "----- Deportes -----\n";
            cout << "7. FIFA (PS5)  $" << abs(PRECIO_JUEGO_FIFA) << "\n";
            cout << "8. NBA (Xbox) $" << abs(PRECIO_JUEGO_NBA) << "\n";
            cout << "9. NFL (PS5) $" << abs(PRECIO_JUEGO_NFL) << "\n";

        }
        else if ( opcion == 4 ) {
            cout << "----- Estrategia ----- \n";
            cout << "10. Total War: Rome (PC) $" << abs(PRECIO_JUEGO_TOTALWAR_ROME) << "\n";
            cout << "11. Stellaris (PC) $" << abs(PRECIO_JUEGO_STELLARIS) << "\n";
            cout << "12. CiV: 5 (PC) $" << abs(PRECIO_JUEGO_CIV_5) << "\n";

        }

}

int leerCodigoJuego() {

    int codigo;
    cout << "Ingrese el codigo del juego: \n";
    cin  >> codigo;
    if ( codigo < 1 || codigo > 12  ) {
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
    mostrarCatologoJuegos();
    int codigo = leerCodigoJuego();
    int cantidadJuegos =leerCantidadJuegos();
    for (int i = 0; i < cantidadJuegosRegistrados; i++ ) {
        if ( codigos[ i ] == codigo ) {
            cantidades[ i ] += cantidadJuegos;
            cout << "Producto actualizado \n" << obtenerNombreJuego( codigo ) << "; Genero: "<<
                obtenerCategoria( codigo ) << "; Plataforma: " << obtenerPlataforma ( codigo ) << "; x"
            << cantidades[ i ] << " (cantidad de juegos acumulada) \n\n ";
            return;
        }
    }

    codigos[ cantidadJuegosRegistrados ] = codigo;
    cantidades[ cantidadJuegosRegistrados ] = cantidadJuegos;
    cantidadJuegosRegistrados++;

    cout << "Producto agregado: " << obtenerNombreJuego( codigo ) << "; Genero: "<<
                obtenerCategoria( codigo )<< "; Plataforma: " << obtenerPlataforma ( codigo ) <<
        "; x" << cantidadJuegos << "\n\n";

}

double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados)
{
    double subtotal = 0.0;
    for (int i = 0 ; i < cantidadJuegosRegistrados; i++ ) {
        int precioUnitario = obtenerPrecioJuego( codigos[ i ] );
        subtotal += precioUnitario * cantidades[ i ];
    }

    return subtotal;
}

void limpiarCarrito( int &cantidadJuegosRegistrados ) {
    cantidadJuegosRegistrados = 0;
}



void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento)
{

}




void cargarCompraDemo( int codigos[], int cantidades[], int &cantidadJuegosRegistrados ) {

cantidadJuegosRegistrados = 0;

codigos[ 0 ] = 1;    // Battlefiel
cantidades[ 0 ]= 5;

codigos[ 1 ] = 2; // Call of Duty
cantidades[ 1 ] = 3;

codigos[ 2 ]= 3; // CyberPunk 2077
cantidades[ 2 ] = 1;

codigos[ 3 ] = 4; // Pokemon
cantidades[ 3 ] = 2;

cantidadJuegosRegistrados = 4;

    cout << "\n Se han cargado los juegos de ejemplo en el pedido: \n";
    cout << "- 5 Copias de Battlefield \n";
    cout << "- 3 Copias de Call of Duty \n";
    cout << "- 1 Copia de CyberPunk 2077 \n";
    cout << "- 2 Copias de Pokemon \n\n";

}