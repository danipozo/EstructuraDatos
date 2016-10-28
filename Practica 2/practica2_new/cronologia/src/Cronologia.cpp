#include "Cronologia.h"
#include "EventoHistorico.h"


//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
// Clase para ayudar a la comparación
	template<class Criterio> class ComparaEH {

		int fecha;
		Criterio c;

	public:

		ComparaEH(const EventoHistorico& v, const Criterio& _c): c(_c){

			fecha = v.Fecha();
		}

		ComparaEH(int _fecha, Criterio c):fecha(_fecha), c(_c) {};

		bool operator() (const EventoHistorico& evento){
		  return Criterio(fecha, evento.Fecha());
		}
       };


//-------------------------------------------------------------------------
//-------------------------------------------------------------------------

	void Cronologia::Agregar(const EventoHistorico& evento){

		// auto = std::vector<EventoHistorico>::const_iterator it
		auto it = std::find_if(v.begin(), v.end(), ComparaEH<std::less<int>>(evento,std::less<int>()));
  	v.insert(it, evento);
	}

	const std::vector<std::string> Cronologia::ObtenerEventos(int Fecha){
		auto it = std::find_if(v.begin(), v.end(), ComparaEH<std::equal_to<int>>(Fecha, std::equal_to<int>()));
		return it->Eventos();
	}
	friend std::istream& operator>>(std::istream& is, Cronologia c){

		EventoHistorico evento;

		while(is >> evento){

			Agregar(evento);

		}
	}


