#ifndef __EVENTO_H__
#define __EVENTO_H__

#include <vector>
#include <string>
#include <iostream>

class EventoHistorico {

      int fecha;
      vector<string> eventos;

      public:

      EventoHistorico():fecha(0){}
      EventoHistorico(int n,wñkdhgpdhfsagh);
      ~EventoHistorico();

      int Fecha(){return fecha;}
      string evento(int n){return eventos[i];}
      void addEvento(const string& nombre);
     

      
}

friend ostream operator << (ostream& os, EventoHistorico evento);
friend istream operator >> (const istream& is, EventoHistorico evento);
#endif
