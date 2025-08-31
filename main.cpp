
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
cout << "2. Mostrar Resumen de la compra\n";
cout << "3. Realizar Demostracion del programa (vacia el carrito previo)\n";
cout << "4. Mostrar subtotal \n";
cout << "5. Limpiar el carrito\n";
cout << "6. Finalizar la compra.\n";
cout << "-1. Salir \n";
cout << "Elija una opcion: \n";
}

int leerOpcionMenu()
{
    int opcion;
    cin >> opcion;
    while ((opcion < 1 || opcion > 6 ) && (opcion != -1) )
    {
        cout << "Opcion invalida. Intente de nuevo (1-6): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> opcion;
    }
    return opcion;
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
            case 1: {
                agregarJuegoAlCarrito( codigos, cantidades, cantidadJuegosRegistrados );
                break;
            }
            case 2: {
                if (cantidadJuegosRegistrados == 0 ) {
                    cout << "\nNo hay juegos registrados en el carrito.\n\n";
                    break;
                }

                for (int i=0; i < cantidadJuegosRegistrados; i++ ) {
                    cout << fixed << setprecision( 2 );
                    cout <<  "Juego: " << obtenerNombreJuego( codigos [ i ] ) << "\nCategoria: "<<  obtenerCategoria(codigos[i])
                        <<"\nPlataforma: " << obtenerPlataforma(codigos[i]) <<
                        "\nPrecio individual del juego: $" << obtenerPrecioJuego( codigos [ i ] ) <<
                            "\nCantidades: x" << cantidades[ i ] << "\nSubtotal de las unidades del juego: $" <<
                                cantidades[ i ]*obtenerPrecioJuego( codigos [ i ] ) << "\n\n";

                }

                double subtotal = calcularSubtotalCarrito( codigos, cantidades, cantidadJuegosRegistrados );
                cout << fixed << setprecision(2 );
                cout << "\nSubtotal total actual: $" << subtotal << "\n \n";
                break;
            }
            case 3: {
                cargarCompraDemo( codigos, cantidades, cantidadJuegosRegistrados );
                break;
            }
            case 4: {

                double subtotal = calcularSubtotalCarrito( codigos, cantidades, cantidadJuegosRegistrados );
                cout << fixed << setprecision(2 );
                cout << "\n Subtotal actual: $" << subtotal << "\n \n";
                break;
            }

            case 5: {
                if ( cantidadJuegosRegistrados==0) {
                    cout << "\nEl carrito ya es limpio.\n\n";
                    break;
                }
                limpiarCarrito( cantidadJuegosRegistrados );
                break;
            }

            case 6: {
                if (cantidadJuegosRegistrados == 0 ) {
                    cout << "\nNo hay juegos registrados en el carrito.\n";
                    break;
                }

                double subtotal = calcularSubtotalCarrito( codigos, cantidades, cantidadJuegosRegistrados);
                int tipoUsuario = leerTipoCliente();
                double porcentajeDescuento = obtenerPorcentajeDescuento(tipoUsuario);
                mostrarResumenCompra( codigos, cantidades, cantidadJuegosRegistrados, porcentajeDescuento );
                break;

            }
            case -1: {
                cout << "\n Saliendo del sistemas. Hasta Pronto!!! \n ";
                break;
            }
        }
    }while( opcion!= -1 );

return 0;
}