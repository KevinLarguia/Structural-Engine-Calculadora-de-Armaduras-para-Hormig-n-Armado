#include "ventana_calculos_vigas.h"
#include <wx/textctrl.h>
#include <wx/string.h>
#include <wx/valtext.h>
#include <wx/msgdlg.h>
//includes agregados
#include "ventana_principal.h"
#include "ventana_calculadora_as.h"
#include "Calculos_v_intermedio.h"

///-----------------------------CONSTRUCTOR-----------------------------
ventana_calculos_vigas::ventana_calculos_vigas(bool tipo_frame, Historial *ptr_historial_intermedia, ventana_historial *ptr_ventana_historial, wxWindow *parent) : viga_intermedia(parent) {
	wxTextValidator vali(wxFILTER_NUMERIC);
	largo_v_intermedio->SetValidator(vali);
	ancho_v_intermedio->SetValidator(vali);
	altura_v_intermedio->SetValidator(vali);
	recubrimiento_v_intermedio->SetValidator(vali);
	momento_v_intermedio->SetValidator(vali);
	altura_efect_v_intermedio->SetValidator(vali);
	distancia_v1_intermedio->SetValidator(vali);
	distancia_v2_intermedio->SetValidator(vali);
	
	m_tipo_frame = tipo_frame;
	
	puntero_ventana_historial = ptr_ventana_historial;
	
	Connect(wxEVT_CHAR_HOOK, wxKeyEventHandler(ventana_calculos_vigas::OnCharHook), NULL, this);
	
	if(m_tipo_frame){
		calculo_intermedio = new Calculos_v_intermedio();
		calculo_extremo = nullptr;
		m_staticText108->Hide();
		
		m_validador_extra=true;
	}else if(!m_tipo_frame){
		calculo_extremo = new Calculos_v_extremo();
		calculo_intermedio = nullptr;
		///Ocultar fila extra completa
		distancia_v2_intermedio->Hide();
		m_staticText17331->Hide();
		m_staticText2631->Hide();
		m_staticText107->Hide();
		
		m_validador_extra = false;
	}
	ptr_historial_inter = ptr_historial_intermedia;
}

///------------------------SEGUNDO CONSTRUCTOR CON DATOS VIEJOS------------------------
ventana_calculos_vigas::ventana_calculos_vigas(Datos_historial muestra_en_calculadora, bool tipo_frame, Historial *ptr_historial_intermedia, wxWindow *parent) : viga_intermedia(parent) {
	wxTextValidator vali(wxFILTER_NUMERIC);
	largo_v_intermedio->SetValidator(vali);
	ancho_v_intermedio->SetValidator(vali);
	altura_v_intermedio->SetValidator(vali);
	recubrimiento_v_intermedio->SetValidator(vali);
	momento_v_intermedio->SetValidator(vali);
	altura_efect_v_intermedio->SetValidator(vali);
	distancia_v1_intermedio->SetValidator(vali);
	distancia_v2_intermedio->SetValidator(vali);
	
	Connect(wxEVT_CHAR_HOOK, wxKeyEventHandler(ventana_calculos_vigas::OnCharHook), NULL, this);

	int tipo_de_hormigon;
	string valor_string_viga(muestra_en_calculadora.viga, 4);
	tipos_hormigon->SetValue(valor_string_viga);
	if(valor_string_viga == "H-20"){
		tipo_de_hormigon=1;
	}else if(valor_string_viga == "H-25"){
		tipo_de_hormigon=2;
	}else{
		tipo_de_hormigon=3;
	}
	
	wxString valor_string_largo = wxString::Format(wxT("%f"), muestra_en_calculadora.largo);
	largo_v_intermedio->SetValue(valor_string_largo);
	
	wxString valor_string_ancho = wxString::Format(wxT("%f"), muestra_en_calculadora.ancho);
	ancho_v_intermedio->SetValue(valor_string_ancho);
	
	wxString valor_string_altura = wxString::Format(wxT("%f"), muestra_en_calculadora.altura);
	altura_v_intermedio->SetValue(valor_string_altura);
	
	wxString valor_string_recubrimiento = wxString::Format(wxT("%f"), muestra_en_calculadora.recubrimiento);
	recubrimiento_v_intermedio->SetValue(valor_string_recubrimiento);
	
	wxString valor_string_momento = wxString::Format(wxT("%f"), muestra_en_calculadora.momento);
	momento_v_intermedio->SetValue(valor_string_momento);
	
	wxString valor_string_altura_efect = wxString::Format(wxT("%f"), muestra_en_calculadora.altura);
	altura_efect_v_intermedio->SetValue(valor_string_altura_efect);
	
	wxString valor_string_distancia_v1 = wxString::Format(wxT("%f"), muestra_en_calculadora.distancia_v1);
	distancia_v1_intermedio->SetValue(valor_string_distancia_v1);
	
	wxString valor_string_distancia_v2 = wxString::Format(wxT("%f"), muestra_en_calculadora.distancia_v2);
	distancia_v2_intermedio->SetValue(valor_string_distancia_v2);
	
	m_tipo_frame = tipo_frame;
	if(m_tipo_frame){
		calculo_intermedio = new Calculos_v_intermedio(tipo_de_hormigon);
		calculo_extremo = nullptr;
		m_staticText108->Hide();
		
		m_validador_extra=true;
	}else if(!m_tipo_frame){
		calculo_extremo = new Calculos_v_extremo(tipo_de_hormigon);
		calculo_intermedio = nullptr;
		///Ocultar fila extra completa
		distancia_v2_intermedio->Hide();
		m_staticText17331->Hide();
		m_staticText2631->Hide();
		m_staticText107->Hide();
		
		m_validador_extra = false;
	}
	
	ptr_historial_inter = ptr_historial_intermedia;
}

void ventana_calculos_vigas::Click_boton_diametros_comerciales_intermedia( wxCommandEvent& event )  {
	if(m_tipo_frame){
		ventana_diametros_comerc = new ventana_calculadora_as(true,NULL,calculo_intermedio,this, NULL);
	}else if(!m_tipo_frame){
		ventana_diametros_comerc = new ventana_calculadora_as(false,calculo_extremo,NULL,this, NULL);
	}
	ventana_diametros_comerc->Show();
}

void ventana_calculos_vigas::Click_boton_volver_intermedia( wxCommandEvent& event )  {
	ventana_principal *volver_inter = new ventana_principal(NULL);
	volver_inter->Show();
	Close();
}

void ventana_calculos_vigas::Combo_tipos_hormigon( wxCommandEvent& event )  {
	int valores_hormigon=0;
	if(tipos_hormigon>=0){
		if(tipos_hormigon->GetSelection()==0){ 
			valores_hormigon = 0;
			if(m_tipo_frame){
				calculo_intermedio->Cargar_tipos_hormigon(valores_hormigon);
			}else if(!m_tipo_frame){
				calculo_extremo->Cargar_tipos_hormigon(valores_hormigon);
			}
		}
		if(tipos_hormigon->GetSelection()==1){ 
			valores_hormigon = 1;
			if(m_tipo_frame){
				calculo_intermedio->Cargar_tipos_hormigon(valores_hormigon);
			}else if(!m_tipo_frame){
				calculo_extremo->Cargar_tipos_hormigon(valores_hormigon);
			}
		}
		if(tipos_hormigon->GetSelection()==2){ 
			valores_hormigon = 2;
			if(m_tipo_frame){
				calculo_intermedio->Cargar_tipos_hormigon(valores_hormigon);
			}else if(!m_tipo_frame){
				calculo_extremo->Cargar_tipos_hormigon(valores_hormigon);
			}
			
		}
		if(tipos_hormigon->GetSelection()==3){ 
			valores_hormigon = 3;
			if(m_tipo_frame){
				calculo_intermedio->Cargar_tipos_hormigon(valores_hormigon);
			}else if(!m_tipo_frame){
				calculo_extremo->Cargar_tipos_hormigon(valores_hormigon);
			}
			
		}
	}
}

void ventana_calculos_vigas::Click_boton_calcular_v_intermedia( wxCommandEvent& event )  {
	
	///Lectura de datos
	//Datos largo de viga
	double largo_inter;
	largo_v_intermedio->GetValue().ToDouble(&largo_inter);
	//Datos ancho de viga
	double ancho_inter;
	ancho_v_intermedio->GetValue().ToDouble(&ancho_inter);
	//Datos altura de viga
	double altura_inter;
	altura_v_intermedio->GetValue().ToDouble(&altura_inter);
	//Datos de recubrimiento
	double recubrimiento_inter;
	recubrimiento_v_intermedio->GetValue().ToDouble(&recubrimiento_inter);
	//Datos momento ultimo
	double momento_inter;
	momento_v_intermedio->GetValue().ToDouble(&momento_inter);
	//Datos altura efectiva
	double altura_efect_inter;
	altura_efect_v_intermedio->GetValue().ToDouble(&altura_efect_inter);
	//Datos distancia a la viga 1 (a)
	double distancia_v1_inter;
	distancia_v1_intermedio->GetValue().ToDouble(&distancia_v1_inter);
	//Datos distancia a la viga 2 (a')
	double distancia_v2_inter;
	distancia_v2_intermedio->GetValue().ToDouble(&distancia_v2_inter);
	
	//validez para datos de entrada
	bool validador = true;
	if(m_tipo_frame){
		if (calculo_intermedio->Mostrar_tipo_hormigon() != 0 ){}else{
			wxMessageBox("No has seleccionado tipo de hormigon","ERROR");
			validador = false;}
	}else if(!m_tipo_frame){
		if (calculo_extremo->Mostrar_tipo_hormigon() != 0 ){}else{
			wxMessageBox("No has seleccionado tipo de hormigon","ERROR");
			validador = false;}
	}
	
	
	if ((float)largo_inter>0 ){}else{
		wxMessageBox("Largo no válido","ERROR");
		validador = false;}
	if ((float)ancho_inter>0 ){}else{
		wxMessageBox("Ancho no válido","ERROR");
		validador = false;}
	if ((float)altura_inter>0 ){}else{
		wxMessageBox("Altura no válida","ERROR");
		validador = false;}
	if ((float)recubrimiento_inter>0 ){}else{
		wxMessageBox("Recubrimiento no válido","ERROR");
		validador = false;}
	if ((float)momento_inter>0 ){}else{
		wxMessageBox("Momento último no válido","ERROR");
		validador = false;}
	if ((float)altura_efect_inter>0 ){}else{
		wxMessageBox("Altura efectiva no válida","ERROR");
		validador = false;}
	if ((float)distancia_v1_inter>0 ){}else{
		wxMessageBox("Distancia (a) no válida","ERROR");
		validador = false;}
	if ((float)distancia_v2_inter>0 || !m_validador_extra){}else{
		wxMessageBox("Distancia (a') no válida","ERROR");
		validador = false;}
	
	/// 	Instanciacion de objeto, llamado a funciones Calculo, llamado a funciones Mostrar
	
	//si el validador es true, muestra resultados
	if(validador){
		if(m_tipo_frame){
			calculo_intermedio->Calculo_ancho_colaborante((float)largo_inter,(float)ancho_inter,(float)altura_efect_inter,(float)distancia_v1_inter,(float)distancia_v2_inter);
			calculo_intermedio->Calculo_momento_nominal((float)momento_inter);
			calculo_intermedio->Calculo_acero_necesario((float)altura_inter,(float)recubrimiento_inter);
			calculo_intermedio->Calculo_acero_minimo((float)ancho_inter,(float)altura_inter,(float)recubrimiento_inter);
		}else if(!m_tipo_frame){
			calculo_extremo->Calculo_ancho_colaborante((float)largo_inter,(float)ancho_inter,(float)altura_efect_inter,(float)distancia_v1_inter,0.0);
			calculo_extremo->Calculo_momento_nominal((float)momento_inter);
			calculo_extremo->Calculo_acero_necesario((float)altura_inter,(float)recubrimiento_inter);
			calculo_extremo->Calculo_acero_minimo((float)ancho_inter,(float)altura_inter,(float)recubrimiento_inter);
		}
		///Declaracion variables de tipo wxString
		wxString resultado_ancho_colaborante;
		wxString resultado_verificacion_ancho;
		wxString resultado_momento_nominal;
		wxString resultado_acero_necesario;
		wxString resultado_acero_minimo;
		wxString as_mayor;
		wxString resultado_comparacion;
		if(m_tipo_frame){
			resultado_ancho_colaborante<<calculo_intermedio->Mostrar_ancho_colaborante();
			resultado_verificacion_ancho<<calculo_intermedio->Mostrar_mensaje_comparacion((float)altura_efect_inter,(float)altura_inter,(float)recubrimiento_inter);
			resultado_momento_nominal<<calculo_intermedio->Mostrar_momento_nominal();
			resultado_acero_necesario<<calculo_intermedio->Mostrar_acero_necesario();
			resultado_acero_minimo<<calculo_intermedio->Mostrar_acero_min();
			as_mayor<<calculo_intermedio->Mostrar_as_mayor();
			resultado_comparacion<<calculo_intermedio->Mostrar_verificacion_as();
		}else if(!m_tipo_frame){
			resultado_ancho_colaborante<<calculo_extremo->Mostrar_ancho_colaborante();
			resultado_verificacion_ancho<<calculo_extremo->Mostrar_mensaje_comparacion((float)altura_efect_inter,(float)altura_inter,(float)recubrimiento_inter);
			resultado_momento_nominal<<calculo_extremo->Mostrar_momento_nominal();
			resultado_acero_necesario<<calculo_extremo->Mostrar_acero_necesario();
			resultado_acero_minimo<<calculo_extremo->Mostrar_acero_min();
			as_mayor<<calculo_extremo->Mostrar_as_mayor();
			resultado_comparacion<<calculo_extremo->Mostrar_verificacion_as();
		}
		
		///Inicio zona set de resultados en celdas
		ver_ancho_colaborante->SetValue(resultado_ancho_colaborante);
		ver_verificacion_b->SetValue(resultado_verificacion_ancho);
		ver_momento_nominal->SetValue(resultado_momento_nominal);
		ver_acero_necesario->SetValue(resultado_acero_necesario);
		ver_acero_minimo->SetValue(resultado_acero_minimo);
		ver_as_mayor->SetValue(as_mayor);
		ver_total_as_elegido->SetValue(resultado_comparacion);
		
		//Carga de datos para historial
		if(m_tipo_frame){
			ptr_historial_inter->Cargar_datos(calculo_intermedio->Mostrar_tipo_hormigon(), "T",(float)largo_inter,(float)ancho_inter,(float)altura_inter,(float)recubrimiento_inter,(float)momento_inter,(float)altura_efect_inter,(float)distancia_v1_inter,(float)distancia_v2_inter
											  ,calculo_intermedio->Mostrar_ancho_colaborante()
											  ,calculo_intermedio->Mostrar_mensaje_comparacion((float)altura_efect_inter,(float)altura_inter,(float)recubrimiento_inter)
											  ,calculo_intermedio->Mostrar_momento_nominal()
											  ,calculo_intermedio->Mostrar_acero_necesario()
											  ,calculo_intermedio->Mostrar_acero_min()
											  );
			
		}else if(!m_tipo_frame){
			ptr_historial_inter->Cargar_datos(calculo_extremo->Mostrar_tipo_hormigon(), "L",(float)largo_inter,(float)ancho_inter,(float)altura_inter,(float)recubrimiento_inter,(float)momento_inter,(float)altura_efect_inter,(float)distancia_v1_inter,0.0
											  ,calculo_extremo->Mostrar_ancho_colaborante()
											  ,calculo_extremo->Mostrar_mensaje_comparacion((float)altura_efect_inter,(float)altura_inter,(float)recubrimiento_inter)
											  ,calculo_extremo->Mostrar_momento_nominal()
											  ,calculo_extremo->Mostrar_acero_necesario()
											  ,calculo_extremo->Mostrar_acero_min()
											  );
		}
		ptr_historial_inter->Guardar_datos_archivo();
		
		
	}
//	puntero_ventana_historial->Click_boton_actualizar(*new wxCommandEvent());'
	
}

void ventana_calculos_vigas::Actualizar_verificacion(){
	wxString resultado_comparacion;
	if(m_tipo_frame){
		resultado_comparacion<<calculo_intermedio->Mostrar_verificacion_as();
	}else if(!m_tipo_frame){
		resultado_comparacion<<calculo_extremo->Mostrar_verificacion_as();
	}
	
	ver_total_as_elegido->SetValue(resultado_comparacion);
}
void ventana_calculos_vigas::OnCharHook(wxKeyEvent& event) {
	if (event.GetKeyCode() == WXK_TAB) {
		// Capturamos la tecla TAB y movemos el foco al siguiente control
		wxWindow *nextCtrl = wxWindow::FindFocus()->GetNextSibling();
		if (!nextCtrl) {
			// Si el siguiente control no existe, movemos el foco al primer control
			nextCtrl = this->GetChildren().GetFirst()->GetData();
		}
		nextCtrl->SetFocus();
	} else {
		// Pasamos el evento a la implementación predeterminada
		event.Skip();
	}
}

ventana_calculos_vigas::~ventana_calculos_vigas() {delete ptr_historial_inter;}

