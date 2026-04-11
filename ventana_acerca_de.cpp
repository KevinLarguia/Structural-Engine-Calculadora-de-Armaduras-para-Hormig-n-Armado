#include "ventana_acerca_de.h"
#include "ventana_principal.h"

ventana_acerca_de::ventana_acerca_de(wxWindow *parent) : acerca_de1(parent) {
	
}

ventana_acerca_de::~ventana_acerca_de() {
	
}

void ventana_acerca_de::Click_boton_volver_acerca_de( wxCommandEvent& event )  {
	ventana_principal *acerca_de = new ventana_principal(NULL);
	acerca_de->Show();
	Close();
	
}
