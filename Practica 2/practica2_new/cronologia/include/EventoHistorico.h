#ifndef EVENTO_H
#define EVENTO_H

#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>


class EventoHistorico {

/**
 * @page repConjunto Rep del TDA Evento Histórico
 * @section invConjunto Invariante de la representación
 *
 * El invariante de este conjunto es el orden de los elementos del vector de strings que contiene los nombres de los eventos, pues el orden es irrelevante. 
 * 
 * @section faConjunto Función de abstracción
 * 
 * Un objeto válido @e rep del TDA Evento Histórico representa a una fecha con un conjunto de eventos que han ocurrido en esa fecha
 *
 */

      int fecha;
      std::vector<std::string> eventos;

      public:

/**
 * @brief Constructor por defecto de la clase
 */
      EventoHistorico():fecha(0){}
/**
 * @brief Destructor por defecto de la clase
 */

      ~EventoHistorico() = default;
 /**
  * @brief Devuelve la fecha del Evento Histórico
  * @return Dato miembro int fecha
  */
      int Fecha() const {return fecha;}

 /**
 * @brief Devuelve un string con el elemento i-ésimo
 * @param i, número de elemento a devolver
 * @return string con el nombre del evento
 */
      std::string evento(int n){return eventos[n];}
 /**
 *  @brief Añade un evento al vector de eventos
 *  @param String con el nombre del evento.
 */
      void Agregar(const std::string& nombre);

 /**
  * @brief Da el vector de todos los eventos
  * @return vector de string con los eventos.
  */   
      std::vector<std::string> Eventos(){ return eventos;}
 /**
 * @brief Imprime en un ostream un evento histórico. Es una función friend.
 * @param ostream& os, donde se imprimirá el evento y se modificará
 * @param evento histórico a imprimir
 * @return devuelve el ostream modificado.
 */
friend std::ostream& operator << (std::ostream& os,const EventoHistorico& evento);

/**
 * @brief Lee desde un istream un evento histórico. Es una función friend.
 * @param const istream& is, para leer el evento histórico sin modificar el istream
 * @param evento a leer
 */
friend std::istream& operator>>(std::istream& is, EventoHistorico& evento);

   
};

#endif // EVENTO_H
