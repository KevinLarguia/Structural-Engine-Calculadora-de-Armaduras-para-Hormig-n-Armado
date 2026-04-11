#ifndef VENTANA_CALCULADORA_DE_VIGAS_H
#define VENTANA_CALCULADORA_DE_VIGAS_H
#include "wxfb_project.h"
#include "Historial.h"
#include "ventana_principal.h"
#include "ventana_historial.h"
class ventana_historial;
class Historial;

class ventana_principal : public calculadora_de_vigas {
	
private:
	Historial *ptr_historial;
	ventana_historial *ptr_ventana_historial;
protected:
	void Click_boton_acerca_de( wxCommandEvent& event )  override;
	void Click_boton_historial( wxCommandEvent& event )  override;
	void Click_boton_referencia( wxCommandEvent& event )  override;
	
public:
	void Click_boton_intermedia( wxCommandEvent& event )  override;
	void Click_boton_extrema( wxCommandEvent& event )  override;
	ventana_principal(wxWindow *parent=NULL);
	~ventana_principal();
};

#endif

