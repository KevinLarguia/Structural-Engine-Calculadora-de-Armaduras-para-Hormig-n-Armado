#include "ventana_historial.h"
#include "Historial.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <wx/valtext.h>
#include <sstream>
#include "Datos_historial.h"
using namespace std;

ventana_historial::ventana_historial(Historial *ptr_historial, ventana_principal *ptr_vent_principal, wxWindow *parent) : historial(parent) {
	ptr_ventana_principal = ptr_vent_principal;
	ptr_historial_h = ptr_historial;
	
	ptr_historial_h->Bucle_Grilla(grilla_historial, this);
}

void ventana_historial::Click_boton_cerrar_historial( wxCommandEvent& event )  {
	Close();
}

void ventana_historial::Click_boton_exportar_historial( wxCommandEvent& event )  {
	ptr_historial_h->Crear_txt(Directorio_importacion);
}

void ventana_historial::boton_seleccion_exportacion( wxFileDirPickerEvent& event )  {
	wxString string_directorio = m_dirPicker1->GetPath();
	string_directorio = string_directorio+"\\"+"Historial.txt";
	Directorio_importacion=string_directorio;
}

void ventana_historial::Click_boton_borrar( wxCommandEvent& event )  {
	ptr_historial_h->Borrar_Historial();
	
	wxMessageBox("Historial eliminado con éxito","Succefully");
	if(Contador_grilla != 0){
		grilla_historial->ClearGrid();
		grilla_historial->DeleteRows(0,Contador_grilla);
	}
	Contador_grilla = 0;
}

void ventana_historial::Click_boton_filtrar( wxCommandEvent& event )  {
	if(Contador_grilla != 0){
		grilla_historial->ClearGrid();
		grilla_historial->DeleteRows(0,Contador_grilla);
	}
	Contador_grilla = 0;
	ptr_historial_h->Filtrar_datos(grilla_historial, this);
}

void ventana_historial::Combo_filtrar_tipo_hormigon( wxCommandEvent& event )  {
	string filtro_tipo_hormigon=" ";
	if(filtrar_tipo_hormigon>=0){
		if(filtrar_tipo_hormigon->GetSelection()==0){ 
			filtro_tipo_hormigon = " ";
			ptr_historial_h->Cargar_filtro_hormigon(filtro_tipo_hormigon);
		}
		if(filtrar_tipo_hormigon->GetSelection()==1){ 
			filtro_tipo_hormigon = "H-20";
			ptr_historial_h->Cargar_filtro_hormigon(filtro_tipo_hormigon);
		}
		if(filtrar_tipo_hormigon->GetSelection()==2){ 
			filtro_tipo_hormigon = "H-25";
			ptr_historial_h->Cargar_filtro_hormigon(filtro_tipo_hormigon);
		}
		if(filtrar_tipo_hormigon->GetSelection()==3){ 
			filtro_tipo_hormigon = "H-30";
			ptr_historial_h->Cargar_filtro_hormigon(filtro_tipo_hormigon);
		}
	}
}

void ventana_historial::Combo_filtrar_tipo_viga( wxCommandEvent& event )  {
	string filtro_tipo_viga=" ";
	if(filtrar_tipo_viga>=0){
		if(filtrar_tipo_viga->GetSelection()==0){ 
			filtro_tipo_viga= " ";
			ptr_historial_h->Cargar_filtro_viga(filtro_tipo_viga);
		}
		if(filtrar_tipo_viga->GetSelection()==1){ 
			filtro_tipo_viga = "T";
			ptr_historial_h->Cargar_filtro_viga(filtro_tipo_viga);
		}
		if(filtrar_tipo_viga->GetSelection()==2){ 
			filtro_tipo_viga = "L";
			ptr_historial_h->Cargar_filtro_viga(filtro_tipo_viga);
		}
	}
}

void ventana_historial::Click_boton_borrar_fila( wxCommandEvent& event )  {
	int fila_a_borrar=grilla_historial->GetGridCursorRow()+1;
	if (fila_a_borrar <= 0 ){
		wxMessageBox("Fila no válida","ERROR");
		return;
	}
	
	ptr_historial_h->Borrar_un_dato(fila_a_borrar, grilla_historial, this);
}

void ventana_historial::Click_reutilizar_datos( wxCommandEvent& event )  {
	if(Contador_grilla != 0){
		int posicion=grilla_historial->GetGridCursorRow()+1;
		ptr_historial_h->Reutilizar_datos_viejos(posicion, ptr_ventana_principal, this);
		ptr_ventana_principal->Close();
		this->Close();
	}else{
		wxMessageBox("No hay datos caragdos.","ERROR");
	}
	
}

void ventana_historial::Click_boton_actualizar( wxCommandEvent& event )  {
	this->Actualizar_grilla();
}

void ventana_historial::Actualizar_grilla(){
	if(Contador_grilla != 0){
		grilla_historial->ClearGrid();
		grilla_historial->DeleteRows(0,Contador_grilla);
		
	}
	Contador_grilla=0;
	ptr_historial_h->Bucle_Grilla(grilla_historial, this);
}

int ventana_historial::Ver_Contador_Grilla(){
	return Contador_grilla;
}

void ventana_historial::Incrementar_Contador_Grilla(){
	Contador_grilla++;
}

void ventana_historial::Cargar_Contador_Grilla(int entero){
	Contador_grilla = entero;
}

ventana_historial::~ventana_historial() {}



