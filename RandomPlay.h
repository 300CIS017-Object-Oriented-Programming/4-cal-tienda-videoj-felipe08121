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


/**
 * @brief Precio de los diferente juegos.
 */
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


/**
 * @brief Diferentes descuentos segun membresia.
 */

const double DESCUENTO_ORO = 0.15;

const double DESCUENTO_PLATA = 0.08;

const double DESCUENTO_CLIENTE_REGULAR = 0.00;



/**
 * @brief Diferentes descuentos segun la categoria de juego escogida.
 */
const double DESCUENTO_ACCION = 0.1;

const double DESCUENTO_AVENTURA = 0.35;

const double DESCUENTO_DEPORTE = 0.20;

const double DESCUENTO_ESTRATEGIA = 0.50;

/**
 * @brief Máximo número de ítems distintos que se pueden registrar en un pedido.
 */

const int MAX_ITEMS = 100;



int leerCodigoJuego();

/**
 * @brief Lee el código de un videojuego ingresado por el usuario.
 * @return Código del videojuego seleccionado.
 */

int leerCantidadJuegos();

/**
 * @brief Lee la cantidad de unidades de un videojuego ingresada por el usuario.
 * @return Cantidad de juegos.
 */


string obtenerNombreJuego(int codigoJuego); //

/**
 * @brief Obtiene el nombre de un videojuego a partir de su código.
 * @param codigoJuego Código del videojuego.
 * @return Nombre del videojuego.
 */

int obtenerPrecioJuego(int codigoJuego); //

/**
 * @brief Obtiene el precio de un videojuego a partir de su código.
 * @param codigoJuego Código del videojuego.
 * @return Precio del videojuego.
 */

string obtenerPlataforma(int codigoJuego); //

/**
 * @brief Obtiene la plataforma de un videojuego a partir de su código.
 * @param codigoJuego Código del videojuego.
 * @return Plataforma del videojuego (PS5, Xbox, PC, Switch).
 */

string obtenerCategoria(int codigoJuego); //

/**
 * @brief Obtiene la categoría de un videojuego a partir de su código.
 * @param codigoJuego Código del videojuego.
 * @return Categoría del videojuego (Acción, Aventura, Deportes, Estrategia).
 */


void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados); //

/**
 * @brief Agrega un videojuego al carrito de compras.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo con cantidades por cada juego.
 * @param cantidadJuegosRegistrados Número total de juegos registrados en el carrito (se actualiza).
 */


double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);

/**
 * @brief Calcula el subtotal del carrito sin aplicar descuentos.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo con cantidades por cada juego.
 * @param cantidadJuegosRegistrados Número total de juegos registrados en el carrito.
 * @return Subtotal del carrito.
 */

int leerTipoCliente();

/**
 * @brief Lee el tipo de cliente (Oro, Plata o Regular).
 * @return Tipo de cliente como entero (1=Oro, 2=Plata, cualquier otro numero=Regular).
 */

double obtenerPorcentajeDescuento(int tipoCliente);

/**
 * @brief Obtiene el porcentaje de descuento según el tipo de cliente.
 * @param tipoCliente Tipo de cliente (Oro, Plata o Regular).
 * @return Porcentaje de descuento (0.15, 0.08 o 0.0).
 */

double obtenerPorcenjeDescuentoAdicional(int codigoJuego);

/**
 * @brief Obtiene el porcentaje de descuento adicional según categoría/plataforma del juego.
 * @param codigoJuego Código del videojuego.
 * @return Porcentaje de descuento adicional.
 */


double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);

/**
 * @brief Calcula el total del carrito aplicando los descuentos adicionales de cada juego.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo con cantidades por cada juego.
 * @param cantidadJuegosRegistrados Número total de juegos registrados en el carrito.
 * @return Total con descuentos adicionales aplicados.
 */


double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales);

/**
 * @brief Calcula el total final aplicando el descuento del cliente y los descuentos adicionales.
 * @param subtotal Subtotal del carrito.
 * @param porcentajeDescuento Descuento aplicado según el tipo de cliente.
 * @param descuentosAdicionales Factor o monto de descuentos adicionales.
 * @return Total final a pagar.
 */


void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento);

/**
 * @brief Muestra un resumen de la compra con detalle de juegos, cantidades, descuentos y total.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo con cantidades por cada juego.
 * @param cantidadJuegosRegistrados Número total de juegos registrados en el carrito.
 * @param porcentajeDescuento Porcentaje de descuento aplicado por el cliente.
 */


void mostrarCatologoJuegos(); //

/**
 * @brief Muestra en pantalla el catálogo de videojuegos disponible.
 */


void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados); //

/**
 * @brief Carga una compra de demostración en el carrito con juegos predefinidos.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo con cantidades por cada juego.
 * @param cantidadJuegosRegistrados Número total de juegos registrados en el carrito (se actualiza).
 */

void limpiarCarrito(  int& cantidadJuegosRegistadros );

/**
 * @brief Limpia el carrito actual eliminando todos los juegos registrados.
 * @param cantidadJuegosRegistadros Número total de juegos registrados en el carrito (se reinicia a 0).
 */



#endif //INC_4_CAL_TIENDA_VIDEOJ_FELIPE08121_RANDOMPLAY_H