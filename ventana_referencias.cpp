#include "ventana_referencias.h"

ventana_referencias::ventana_referencias(wxWindow *parent) : referencias(parent) {
	
}

ventana_referencias::~ventana_referencias() {
	
}
void ventana_referencias::Click_boton_cerrar_referencias( wxCommandEvent& event )  {
	Close();
}

