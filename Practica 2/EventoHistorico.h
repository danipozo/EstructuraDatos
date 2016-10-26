#ifndef EVENTO_H
#define EVENTO_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "EventoHistorico.cpp"



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
      vector<string> eventos;

      public:


      EventoHistorico():fecha(0){}
      EventoHistorico(int n,fstream f);
      ~EventoHistorico() = default();

      int Fecha(){return fecha;}
      string evento(int n){return eventos[i];}
      void addEvento(const string& nombre);
     

      
}

friend ostream operator << (ostream& os, EventoHistorico evento);
friend istream operator >> (const istream& is, EventoHistorico evento);

#endif // EVENTO_H
