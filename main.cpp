
#include <iostream>
#include "RandomPlay.h"
#include <iomanip>

using std:: cout;
using std:: cin;
using std:: fixed;
using std::setprecision;


void mostrarMenu(){

cout << "=====  ->Tienda Random Play - Menu principal ===== \n";
cout << "1. Registrar juego en el pedido \n";
cout << "2. Mostrar Resumen \n";
cout << "3. Finalizar y pagar \n";
cout << "4. Realizar Demostracion del programa \n ";
cout << "-1. Salir \n";
cout << "Elija una opcion: \n";
}

int leerOpcionMenu()
{
    int opcion;
    cin >> opcion;
    while ((opcion < 1 || opcion > 4 ) && (opcion != -1) )
    {
        cout << "Opcion invalida. Intente de nuevo (1-6): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> opcion;
    }
    return opcion;
}


void mostrarCatologoJuegos(){

    int opcion  = 0;

    cout << "=====  - Catalogo de juegos ===== \n";

    cout << "Que Genero juegos desea ver? : \n";
    cout << "1.  Accion. \n";
    cout << "2.  Aventura.\n ";
    cout << "3.  Deportes. \n ";
    cout << "4.  Estrategia \n ";
    cin >> opcion;

    do {
        if (opcion == 1 ) {

            cout << "----Accion---- \n";
            cout << "1. Battlefield; Plataforma: (PS5) \n";
            cout << "2. Call of Duty (Xbox) \n";
            cout << "3. Cyberpunk 2077  (PC)\n";
            cout << "\n Introduzca el codigo del juego: \n";

        }

        else if ( opcion == 2 ) {
            cout << "----- Aventura ----- \n";
            cout << "4. The Witcher 3; Plataforma:(PC) \n";
            cout << "5. Pokemon; Plataforma:  (Switch) \n";
            cout << "6. Zelda (Switch); Plataforma:  \n";
            cout << "-1. Salir \n ";
            cout << "\n Introduzca el codigo del juego: \n";
        }
        else if (opcion == 3 ) {
            cout << "----- Deportes -----\n";
            cout << "7. FIFA; Plataforma: (PS5)  \n";
            cout << "8. NBA; Plataforma: (Xbox) \n";
            cout << "9. NFL; Plataforma:( \n";
            cout << "\n Introduzca el codigo del juego: \n";

        }
        else if ( opcion == 4 ) {
            cout << "----- Estrategia ----- \n";
            cout << "10. Total War: Rome; Plataforma: (PC) \n";
            cout << "11. Stellaris; Plataforma:  (PC) \n";
            cout << "12. CiV: 5; Plataforma: (PC) \n";
            cout << "\n Introduzca el codigo del juego: \n";
        }
    }
    while (opcion != -1);
    return;
}



int leerCodigoCatalogo() {

int codigo;

cin >> codigo;

while ( (codigo < 1 || codigo > 12)  && codigo != -1 ) {
    cout << "Opcion no valida, selecione otra opcion. \n ";
    cin.clear();
    cin.ignore(1000,'\n');
    cin >> codigo;
}

return codigo;
}



int main () {

int opcion = 0;

int codigos[MAX_ITEMS];
int cantidades[MAX_ITEMS];

int cantidadJuegosRegistrados = 0;

do{
    mostrarMenu();
    opcion = leerOpcionMenu();
    switch ( opcion ) {
        case 1:
            agregarJuegoAlCarrito( codigos[], cantidades[], &cantidadJuegosRegistrados );
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            cargarCompraDemo( codigos, cantidades, cantidadJuegosRegistrados );
            break;
        case -1:
            cout << "\n Saliendo del sistemas. Hasta Pronto!!! \n ";
            break;
    }
}while ( opcion!= -1 );

return 0;
}