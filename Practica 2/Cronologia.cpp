


	void Cronologia::Agregar(const EventoHistorico& evento){
		
		v.push(evento);
	
	}
	
	bool Cronologia::Comparacion (const EventoHistorico& a,const EventoHistorico& b){
		return a.Fecha() < b.Fecha();
	}