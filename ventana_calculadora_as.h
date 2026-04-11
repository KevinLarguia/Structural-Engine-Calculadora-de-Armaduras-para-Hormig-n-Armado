#ifndef VENTANA_CALCULADORA_AS_H
#define VENTANA_CALCULADORA_AS_H
#include "wxfb_project.h"
//includes personales
#include "ventana_calculos_vigas.h"
#include "Calculos_v_intermedio.h"
#include "Calculos_v_extremo.h"
class ventana_calculos_vigas;
class ventana_calculadora_as : public calculadora_as_inter {
	
private:
	
	Calculos_v_intermedio *calculos_diametros;
	Calculos_v_extremo *calculos_diametros_extremo;
	bool m_tipo_frame;
	ventana_calculos_vigas *calculos_de_vigas;
protected:
	void Click_boton_calcular_as( wxCommandEvent& event )  override;
public:
	ventana_calculadora_as(bool tipo_frame, Calculos_v_extremo *calculo_extremo, Calculos_v_intermedio *calculo_intermedio, ventana_calculos_vigas *ptr_calculos_vigas, wxWindow *parent=NULL);
	~ventana_calculadora_as();
};

#endif

