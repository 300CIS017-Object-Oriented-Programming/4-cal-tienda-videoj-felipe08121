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
            return"FIFA";
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

    cout << "1. Accion - Descuento 10%. \n";
    cout << "2. Aventura - Descuento 35%.\n";
    cout << "3. Deportes - Descuento 20%. \n";
    cout << "4. Estrategia - Descuento 50%. \n";

    cout << "Que Genero de juegos deseas ver? : \n";
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

int leerTipoCliente()
{
    cout << "Tipo de cliente: \n" <<"1. Miembro Oro: 15% \n" <<
        "2. Miembro Plata: 8% \n"<< "Cualquier Otro Numero (positivo). Cliente Regular: 0% \n";
    cout << "Por favor ingrese el numero que corresponde: ";
    int tipo;
    cin >> tipo;
    while (tipo < 1 ) {
        cout << "Opcion no valida. intente de nuevo (1-3). \n";
        cin.clear();
        cin.ignore(1000, '\n' );
        cin >> tipo;
    }
    return tipo;
}

double obtenerPorcentajeDescuento(int tipoCliente)
{
    if (tipoCliente == 1) {
        return abs(DESCUENTO_ORO);
    }
    else if (tipoCliente == 2) {
        return abs(DESCUENTO_PLATA);
    }

    return abs(DESCUENTO_CLIENTE_REGULAR);

}

double obtenerPorcenjeDescuentoAdicional(int codigoJuego )
{
    string categoria = obtenerCategoria(codigoJuego);

    if (categoria == "Accion" ) {
        return abs(DESCUENTO_ACCION);
    }

    else if (categoria == "Aventura") {
        return abs(DESCUENTO_AVENTURA);
    }

    else if (categoria == "Deportes" ) {
        return abs(DESCUENTO_DEPORTE);
    }
    else if (categoria == "Estrategia") {
        return abs(DESCUENTO_ESTRATEGIA);
    }
}


double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados)
{

    double subtotal= 0.0;
    for ( int i=0 ; i < cantidadJuegosRegistrados; i++ ) {
        subtotal += (obtenerPrecioJuego( codigos[ i ] ) * cantidades[ i ]) * obtenerPorcenjeDescuentoAdicional(codigos[ i ]);
    }
    return subtotal;
}


double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales)
{

    return (subtotal * (1.0 - porcentajeDescuento)) - descuentosAdicionales;

}


void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento)
{
//Aunque la funcion se llame mostrarResumenCompra, es la que se utiliza en el main en caso de finalizar compra.
    cout << "\nResumen del pedido: \n";

    double subtotal = 0.0;
    for ( int i = 0; i < cantidadJuegosRegistrados; i++ ) {
        string nombreJuego = obtenerNombreJuego(codigos[ i ]);
        int precio = obtenerPrecioJuego( codigos [ i ] );
        double parcial = precio * cantidades[ i ];
        subtotal += parcial;
        cout << fixed << setprecision( 2 );
        cout << nombreJuego << " x" << cantidades[ i ] << " = $" << parcial << "\n";
    }

    double descuentosAdicionales = calcularDescuentosAdicionales( codigos, cantidades, cantidadJuegosRegistrados);
    cout << fixed << setprecision( 2 );
    cout << "\nTotal sin Descuento: $" << subtotal << "\n";
    cout << "Total con Descuentos (Incluye los descuentos por categoria): $" << calcularTotalFinal( subtotal, porcentajeDescuento, descuentosAdicionales) << "\n\n";

}




void cargarCompraDemo( int codigos[], int cantidades[], int &cantidadJuegosRegistrados ) {

    // Limpiar pedido actual si existe
cantidadJuegosRegistrados = 0;


    // Añadir productos de ejemplo
codigos[ 0 ] = 1;    // Battlefiel
cantidades[ 0 ]= 5;

codigos[ 1 ] = 4; // The Witcher 3
cantidades[ 1 ] = 3;

codigos[ 2 ]= 7; // Fifa
cantidades[ 2 ] = 1;

codigos[ 3 ] = 10; // Total War: Rome
cantidades[ 3 ] = 2;

cantidadJuegosRegistrados = 4;

    cout << "\n Se han cargado los juegos de ejemplo en el pedido: \n";
    cout << "- 5 Copias de Battlefield - Descuento (Accion): 10%\n";
    cout << "- 3 Copias de The Witcher 3 - Descuento (Aventura): 35%\n";
    cout << "- 1 Copia de Fifa - Descuento (Deportes): 20%\n";
    cout << "- 2 Copias de Total War: Rome - Descuento (Estrategia): 50%\n\n";

}