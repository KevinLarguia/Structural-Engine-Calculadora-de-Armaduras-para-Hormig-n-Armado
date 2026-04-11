#include "ventana_principal.h"
#include "ventana_calculos_vigas.h"
#include "ventana_historial.h"
#include "ventana_acerca_de.h"
#include "ventana_referencias.h"

ventana_principal::ventana_principal(wxWindow *parent) : calculadora_de_vigas(parent) {
	ptr_historial = new Historial();
	ptr_ventana_historial = new ventana_historial(ptr_historial, this,NULL);
}

void ventana_principal::Click_boton_acerca_de( wxCommandEvent& event )  {
	ventana_acerca_de *acerca_de = new ventana_acerca_de(NULL);
	acerca_de->Show();
	Close();
}

void ventana_principal::Click_boton_historial(wxCommandEvent& event )  {
	ptr_ventana_historial->Show();
}


void ventana_principal::Click_boton_referencia( wxCommandEvent& event )  {
	ventana_referencias *referencias = new ventana_referencias(NULL);
	referencias->Show();
}

void ventana_principal::Click_boton_intermedia( wxCommandEvent& event )  {
	ventana_calculos_vigas *intermedia = new ventana_calculos_vigas(true,ptr_historial, ptr_ventana_historial,NULL);
	intermedia->Show();
	this->Close();
	
}

void ventana_principal::Click_boton_extrema( wxCommandEvent& event )  {
	ventana_calculos_vigas *extrema = new ventana_calculos_vigas(false,ptr_historial, ptr_ventana_historial,NULL);
	extrema->Show();
	this->Close();
}

ventana_principal::~ventana_principal() {}

