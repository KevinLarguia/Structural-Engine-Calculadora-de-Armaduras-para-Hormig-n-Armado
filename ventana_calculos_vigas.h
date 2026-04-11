#ifndef VENTANA_CALCULOS_VIGAS_H
#define VENTANA_CALCULOS_VIGAS_H
#include "wxfb_project.h"
//includes personalizados
#include "Calculos_v_intermedio.h"
#include "Calculos_v_extremo.h"
#include "Historial.h"
#include "ventana_calculadora_as.h"
#include "ventana_historial.h"
class ventana_historial;
class ventana_calculadora_as;
class ventana_calculos_vigas : public viga_intermedia {
	
private:
	Calculos_v_intermedio *calculo_intermedio;
	Calculos_v_extremo *calculo_extremo;
	ventana_calculadora_as *ventana_diametros_comerc;
	Historial *ptr_historial_inter;
	bool m_validador_extra;
	bool m_tipo_frame;
	ventana_historial *puntero_ventana_historial;
protected:
	void Click_boton_diametros_comerciales_intermedia( wxCommandEvent& event )  override;
	void Click_boton_volver_intermedia( wxCommandEvent& event )  override;
	void Combo_tipos_hormigon( wxCommandEvent& event )  override;
	void Click_boton_calcular_v_intermedia( wxCommandEvent& event )  override;
	
public:
	void Actualizar_verificacion();
	void OnCharHook(wxKeyEvent& event);
	
	ventana_calculos_vigas (bool tipo_frame, Historial *ptr_historial_intermedia, ventana_historial *ptr_ventana_historial, wxWindow *parent=NULL);
	ventana_calculos_vigas (Datos_historial muestra_en_calculadora ,bool tipo_frame, Historial *ptr_historial_intermedia, wxWindow *parent=NULL);
	~ventana_calculos_vigas ();
};


#endif
