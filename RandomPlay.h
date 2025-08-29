//
// Created by felip on 29/08/2025.
//

#ifndef INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H
#define INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H

#include <iostream>
#include <string>
#include <iomanip>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

const int PRECIO_JUEGO_GODOFWAR = 200000;





string obtenerNombreJuego(int codigoJuego);


int obtenerPrecioJuego(int codigoJuego);


string obtenerPlataforma(int codigoJuego);


string obtenerCategoria(int codigoJuego);


void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);


double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);


int leerTipoCliente();


double obtenerPorcentajeDescuento(int tipoCliente);


double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);


double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales);


void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento);


void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);





#endif //INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H