#ifndef CRONOLOGIA_H
#define CRONOLOGIA_H

#include <vector>
#include <algorithm>
#include "EventoHistorico.h"
#include <functional>

class Cronologia {

	private:

/**
 * @page repConjunto Rep del TDA Cronología
 *
 * @section invConjunto Invariante de la representación
 *
 * El invariante es la ordenación del vector, siempre por orden de ocurrencia.
 *
 * @section faConjunto Función de abstracción
 *
 * Un objeto válido @e rep del TDA Cronología representa a un conjunto de sucesos ordenados por fecha.
 *
 */
		std::vector <EventoHistorico> v;

	public:

/**
 * @brief Constructor de la clase cronología,
 */

	Cronologia() = default;

/**
 * @brief Destructor de la clase cronología,
 */
	~Cronologia() = default;


/**
 * @brief Incorporación de un elemento
 * @param evento Elemento a incorporar
 */

	void Agregar (const EventoHistorico& evento);

	/**
	 * @brief Devuelve los eventos de una fecha determinada
	 * @param Fecha, de la cual se quiere conocer los eventos.
	 */

	const std::vector<std::string> ObtenerEventos(int Fecha);


	/**
	 * @brief Operacion de entrada.
	 * @param is Flujo de entrada.
	 * @param c Cronologia donde guardar la entrada.
	 */


	friend std::istream& operator>>(std::istream& is, Cronologia& c);



};

#endif // CRONOLOGIA_H
