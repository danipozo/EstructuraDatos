#ifndef CRONOLOGIA_HH
#define CRONOLOGIA_HH

#include <queue>
#include "EventoHistorico.h"

class Cronologia {

	private:
	
/**
 * @page repConjunto Rep del TDA Cronologia
 *
 * @section invConjunto Invariante de la representación
 *
 * El invariante es la ordenacion del vector, siempre por orden de ocurrencia.
 *
 * @section faConjunto Función de abstracción
 *
 * Un objeto válido @e rep del TDA Cronologia representa a un conjunto de sucesos ordenados por fecha.
 *
 */
	priority_queue <EventoHistorico,std::vector <EventoHistorico> , Cronologia::Comparacion > v;

	public:
	
/**
 * @brief Constructor de la clase cronologia,
 */ 
	
	Cronologia() = default;
	~Cronologia() = default;
	
/**
 * @brief Funcion de comparacion para la ordenacion
 * @param a elemento EventoHistorico a comparar.
 * @param b elemento EventoHistorico a comparar.
 * @return La fecha del elemento b es mayor que la del elemento a.
 */ 
	
	
	bool Comparacion (const EventoHistorico& a,const EventoHistorico& b);
	
/**
 * @brief Incorporación de un elemento
 * @param evento Elemento a incorporar
 */ 
 
	void Agregar (const EventoHistorico& evento);
	
	
}

#endif // CRONOLOGIA_HH