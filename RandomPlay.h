//
// Created by felip on 29/08/2025.
//

#ifndef INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H
#define INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::abs;

const int PRECIO_JUEGO_BATTLEFIELD= 200000;

const int PRECIO_JUEGO_CALLOFDUTY= 220000;

const int PRECIO_JUEGO_CYRBERPUNK_2077 = 150000;

const int PRECIO_JUEGO_THEWITCHER_3 = 100000;

const int PRECIO_JUEGO_POKEMON = 250000;

const int PRECIO_JUEGO_ZELDA = 260000;

const int PRECIO_JUEGO_FIFA = 200000;

const int PRECIO_JUEGO_NBA = 180000;

const int PRECIO_JUEGO_NFL = 110000;

const int PRECIO_JUEGO_TOTALWAR_ROME = 50000;

const int PRECIO_JUEGO_STELLARIS =  90000;

const int PRECIO_JUEGO_CIV_5 = 160000;



const int MAX_ITEMS = 100;

int leerCodigoJuego();


int leerCantidadJuegos();


string obtenerNombreJuego(int codigoJuego); //


int obtenerPrecioJuego(int codigoJuego); //


string obtenerPlataforma(int codigoJuego); //


string obtenerCategoria(int codigoJuego); //


void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados); //


double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);


int leerTipoCliente();


double obtenerPorcentajeDescuento(int tipoCliente);


double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);


double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales);


void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento);


void mostrarCatologoJuegos(); //


void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados); //

void limpiarCarrito(  int& cantidadJuegosRegistadros );



#endif //INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H