
#include "EventoHistorico.h"
#include <iostream>
#include <string>
#include <vector>


void EventoHistorico::Agregar(const std::string& nombre){

  eventos.push_back(nombre);

}

std::ostream& operator<< (std::ostream& os,const EventoHistorico& evento){

  if(os){
    os << evento.fecha << "#";
    for(std::vector<std::string>::const_iterator it = evento.eventos.begin(); it !=  evento.eventos.end(); ++it){
	os << *it;
	if(it!= evento.eventos.end()) os << "#";
      }
  }
  
  return os;

}

std::istream& operator >>(std::istream& is, EventoHistorico& evento){

  if(is){

    is >> evento.fecha;
    is.ignore();

    while(is.peek() != '\n'){
      std::string mistring;
      char michar;
      while(is.peek()!= '#'){
	is >> michar;
	mistring.push_back(michar);
      }
      is.ignore();
      evento.eventos.push_back(mistring);

    }

  }

    return is;

}
  
