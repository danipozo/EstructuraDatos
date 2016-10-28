
#include "EventoHistorico.h"
#include <iostream>
#include <string>
#include <vector>


void EventoHistorico::Agregar(const std::string& nombre){

  eventos.insert(nombre, eventos.end());

}

 std::ostream& operator << (std::ostream& os,const EventoHistorico& evento){

  if(os){
    os << fecha << "#";
      for(std::vector<string>::iterator it = eventos.begin(); it !=  eventos.end(); it++){
	os << eventos[it];
	if(it!= eventos.end()) os << "#";
      }
  }
  
  return os;

}

std::istream& operator >> (std::istream& is, EventoHistorico& evento){

  if(is){

    is >> fecha >> is.ignore();

    while(is.peek() != '\n'){
      std::string mistring;
      char michar;
      while(is.peek()!= '#'){
	is >> michar;
	mistring.push_back(michar);
      }
      is.ignore();
      eventos.insert(mistring,eventos.end());

    }

  }

    return is;

}
  
