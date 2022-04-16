

#ifndef FUNCIONESCALCULO_H_
#define FUNCIONESCALCULO_H_
#include <stdio.h>

/// @fn float PrecioDebito(float)
/// @brief recibe un flotante, realiza unos calculos y devuelve otro flotante
/// @param precio es el flotante que recibe
/// @return es el valor que devuelve luego de realizar los calculos
float PrecioDebito(float precio);

/// @fn float PrecioCredito(float)
/// @brief recibe un flotante, realiza unos calculos y devuelve otro flotante
/// @param precio es el flotante que recibe
/// @return es el valor que devuelve luego de realizar los calculos
float PrecioCredito(float precio);

/// @fn float PrecioBTC(float)
/// @brief recibe un flotante, realiza unos calculos y devuelve otro flotante
/// @param precio es el flotante que recibe
/// @return es el valor que devuelve luego de realizar los calculos
float PrecioBTC(float precio);

/// @fn float PrecioUnitario(float, float)
/// @brief recibe dos flotantesy calcula el precio unitario, es decir el precio por kilometro
/// @param precio es el precio ingresado
/// @param km son los kilometros ingresados
/// @return es el flotante resultado de los calculos realizados
float PrecioUnitario(float precio, float km);

/// @fn float DiferenciaDePrecio(float, float)
/// @brief recibe dos flotantes, calcula la diferencia entre ellos y devuelve un flotante
/// @param precioLatam es el flotante del precio ingresado
/// @param precioAerolinea es el flotante del precio ingresado
/// @return devuelve el modulo del resultado de la diferencia calculada
float DiferenciaDePrecio(float precioLatam, float precioAerolinea);

/// @fn void DatosHC(void)
/// @brief dentro de esta funcion llama a otras funciones que realizan los calculos-
/// y luego muestra todos los datos calcula
void DatosHC(void);

#endif /* FUNCIONESCALCULO_H_ */
