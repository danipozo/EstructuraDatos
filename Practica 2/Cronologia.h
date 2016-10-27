#ifndef CRONOLOGIA_H
#define CRONOLOGIA_H

#include <queue>
#include "EventoHistorico.h"

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
	priority_queue <EventoHistorico,std::vector <EventoHistorico> , Cronologia::Comparacion > v;

	public:
	
/**
 * @brief Constructor de la clase cronología,
 */ 
	
	Cronologia() = default;
	~Cronologia() = default;
	
/**
 * @brief Funcion de comparación para la ordenación
 * @param a elemento EventoHistórico a comparar.
 * @param b elemento EventoHistórico a comparar.
 * @return La fecha del elemento b es mayor que la del elemento a.
 */ 
	
	
	bool Comparacion (const EventoHistorico& a,const EventoHistorico& b);
	
/**
 * @brief Incorporación de un elemento
 * @param evento Elemento a incorporar
 */ 
 
	void Agregar (const EventoHistorico& evento);
	
	
}

#endif // CRONOLOGIA_H
