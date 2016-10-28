
#include "EventoHistorico.h"
#include <iostream>

string EventoHistorico::evento(int n){

  return eventos[i];

}

void EventoHistorico::Agregar(const string& nombre){

  eventos.insert(nombre, eventos.end());

}


 std::ostream operator << (std::ostream& os,const EventoHistorico& evento){

  if(os){
    os << fecha << "#"
    for(std::vector<string>::iterator it = evento.begin(); it !=  evento.end(); it++)
    {
      os << eventos[i];
      if(it!= evento.end) os << "#";
    }
  }
  
  return os;

}

std::istream operator >> (const std::istream& is, EventoHistorico& evento){

  if(is){

    is >> fecha >> is.ignore();

    while(is.peek() != '\n'){
      string mistring;
      char michar;
      while(is.peek()!= '#'){
	mistring.pushback(is >> c);
      }
      is.ignore();
      eventos.insert(mistring,eventos.end());

    }

  }

    return is;

}
  
