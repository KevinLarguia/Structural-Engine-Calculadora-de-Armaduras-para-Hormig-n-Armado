#include "ventana_calculadora_as.h"
#include <wx/valtext.h>
#include <wx/string.h>
//includes personales
#include "Calculos_v_intermedio.h"
#include "Calculos_v_extremo.h"
#include <wx/msgdlg.h>
#include "ventana_calculos_vigas.h"

ventana_calculadora_as::ventana_calculadora_as(bool tipo_frame, Calculos_v_extremo *calculo_extremo, Calculos_v_intermedio *calculo_intermedio, ventana_calculos_vigas *ptr_calculos_vigas, wxWindow *parent) : calculadora_as_inter(parent) {
	wxTextValidator vali(wxFILTER_NUMERIC);
	diametro_10->SetValidator(vali);
	diametro_12->SetValidator(vali);
	diametro_16->SetValidator(vali);
	diametro_20->SetValidator(vali);
	m_tipo_frame = tipo_frame;
	if(m_tipo_frame){
		calculos_diametros = calculo_intermedio;
		calculos_diametros_extremo = nullptr;
		
		m_staticText109->Hide();
	}else if (!m_tipo_frame){
		calculos_diametros_extremo = calculo_extremo;
		calculos_diametros = nullptr;
		
		m_staticText9->Hide();
	}
	calculos_de_vigas = ptr_calculos_vigas;
}

void ventana_calculadora_as::Click_boton_calcular_as( wxCommandEvent& event )  {
	//Lectura de datos
	double diam10;
	diametro_10->GetValue().ToDouble(&diam10);
	double diam12;
	diametro_12->GetValue().ToDouble(&diam12);
	double diam16;
	diametro_16->GetValue().ToDouble(&diam16);
	double diam20;
	diametro_20->GetValue().ToDouble(&diam20);
	
	//validez para datos de entrada
	bool validador = true;
	if ((int)diam10 < 0){
		wxMessageBox("Cantidad no válida","ERROR");
		validador = false;}
	if ((int)diam12 < 0){
		wxMessageBox("Cantidad no válida","ERROR");
		validador = false;}
	if ((int)diam16 < 0){
		wxMessageBox("Cantidad no válida","ERROR");
		validador = false;}
	if ((int)diam20 < 0){
		wxMessageBox("Cantidad no válida","ERROR");
		validador = false;}
	
	//si el validador es true, muestra resultados
	if(validador){
		/// Instanciacion de objeto, llamado a funciones Calculo, llamado a funciones Mostrar
		///Declaracion variables de tipo wxString
		wxString resultado_diametro_total;
		wxString resultado_diametro_1;
		wxString resultado_diametro_2;
		wxString resultado_diametro_3;
		wxString resultado_diametro_4;
		
		if(m_tipo_frame){
			calculos_diametros->Calculos_diametro((int)diam10,(int)diam12,(int)diam16,(int)diam20);
			resultado_diametro_total<<calculos_diametros->Mostrar_resultado_total();
			resultado_diametro_1<<calculos_diametros->Mostrar_resultado_1();
			resultado_diametro_2<<calculos_diametros->Mostrar_resultado_2();
			resultado_diametro_3<<calculos_diametros->Mostrar_resultado_3();
			resultado_diametro_4<<calculos_diametros->Mostrar_resultado_4();
		}else if (!m_tipo_frame){
			calculos_diametros_extremo->Calculos_diametro((int)diam10,(int)diam12,(int)diam16,(int)diam20);
			resultado_diametro_total<<calculos_diametros_extremo->Mostrar_resultado_total();
			resultado_diametro_1<<calculos_diametros_extremo->Mostrar_resultado_1();
			resultado_diametro_2<<calculos_diametros_extremo->Mostrar_resultado_2();
			resultado_diametro_3<<calculos_diametros_extremo->Mostrar_resultado_3();
			resultado_diametro_4<<calculos_diametros_extremo->Mostrar_resultado_4();
		}
		///Set de valores en celdas
		resultado_total_diam->SetValue(resultado_diametro_total);
		resultado_total_diam_10->SetValue(resultado_diametro_1);
		resultado_total_diam_12->SetValue(resultado_diametro_2);
		resultado_total_diam_16->SetValue(resultado_diametro_3);
		resultado_total_diam_20->SetValue(resultado_diametro_4);
	}
	
	calculos_de_vigas->Actualizar_verificacion();
}

ventana_calculadora_as::~ventana_calculadora_as() {
	
}


