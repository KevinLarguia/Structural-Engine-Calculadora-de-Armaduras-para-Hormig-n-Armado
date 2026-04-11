#ifndef VENTANA_HISTORIAL_H
#define VENTANA_HISTORIAL_H
#include "wxfb_project.h"
#include "Historial.h"
#include "ventana_principal.h"
class ventana_principal;
class Historial;
class ventana_historial : public historial {
	
private:
	Historial *ptr_historial_h;
	ventana_principal *ptr_ventana_principal;
	wxString Directorio_importacion="Historial.txt";
	
	int Contador_grilla = 0;
	
protected:
	void Click_boton_cerrar_historial( wxCommandEvent& event )  override;
	void Click_boton_exportar_historial( wxCommandEvent& event )  override;
	void boton_seleccion_exportacion( wxFileDirPickerEvent& event )  override;
	void Click_boton_borrar( wxCommandEvent& event )  override;
	void Click_boton_filtrar( wxCommandEvent& event )  override;
	void Combo_filtrar_tipo_hormigon( wxCommandEvent& event )  override;
	void Combo_filtrar_tipo_viga( wxCommandEvent& event )  override;
	void Click_boton_borrar_fila( wxCommandEvent& event )  override;
	void Click_reutilizar_datos( wxCommandEvent& event )  override;
	
	
	
public:
	void Click_boton_actualizar( wxCommandEvent& event ) override;
	void Actualizar_grilla();
	
	int Ver_Contador_Grilla();
	void Incrementar_Contador_Grilla();
	void Cargar_Contador_Grilla(int entero);
	ventana_historial(Historial *ptr_historial, ventana_principal *ptr_vent_principal, wxWindow *parent=NULL);
	~ventana_historial();
};

#endif

